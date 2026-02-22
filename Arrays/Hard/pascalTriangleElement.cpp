#include <bits/stdc++.h>
using namespace std;

//Brute force approach - nCr

// int fact(int num){
//   if(num <= 0) return 1;
//   return num * fact(num-1);
// }
// int getElement(int row, int col){
//   int n1 = fact(row-1);
//   int n2 = fact(col-1);
//   int n3 = fact((row-1)-(col-1));
//   int result = (n1) / (n2 * n3);

//   return result;
// }

//Optimal approach - nCr

int funcNcR(int row, int col){
  int res = 1;
  for(int i = 0; i < (col-1); i++){
    res = res * ((row-1) - i);
    res = res / (i+1);
  }
  return res;
}


int main()
{

#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  int row, col;
  cin >> row >> col;

  // auto pascal = getElement(row, col);
  auto pascal = funcNcR(row, col);
  cout << pascal ;

  return 0;
}