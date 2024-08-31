#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findAllPermutations(vector<int> arr)
{
  vector<vector<int>> allPermutaions;
  sort(arr.begin(), arr.end());
  do
  {
    allPermutaions.push_back(arr);
  } while (next_permutation(arr.begin(), arr.end()));
  return allPermutaions;
}

void findNextPermutation(vector<int> &arr)
{
  auto allPermu = findAllPermutations(arr);
  auto it = find(allPermu.begin(), allPermu.end(), arr);
  if(it == allPermu.end()-1){
    arr = allPermu[0]; 
  }
  else if (it != allPermu.end())
  {
    arr = *(it+1);
  }
  
}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  vector<int> arr = {3, 2, 1};

  findNextPermutation(arr);
  for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
  return 0;
}