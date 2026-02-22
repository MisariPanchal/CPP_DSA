#include <bits/stdc++.h>
using namespace std;

// Brute force approach

// int funcNcR(int row, int col){
//   int res = 1;
//   for(int i = 0; i < col; i++){
//     res = res * (row - i);
//     res = res / (i+1);
//   }
//   return res;
// }
// vector<int> generateRow(int numRows){
//   vector<int> temp;

//   for(int col = 1; col <= numRows; col++){
//     temp.push_back(funcNcR(numRows-1, col-1));
//   }
//   return temp;
// }

// Optimal approach

vector<int> generateRow(int numRows)
{
  if (numRows == 0) return {0};
  vector<int> ans = {1};
  int calc = 1;

  for (int i = 1; i < numRows; i++)
  {
    calc = calc * (numRows - i);
    calc = calc / (i);
    ans.push_back(calc);
  }
  return ans;
}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  int row;
  cin >> row;

  auto pascal = generateRow(row);
  for (auto it : pascal)
  {
    cout << it << ", ";
  }

  return 0;
}