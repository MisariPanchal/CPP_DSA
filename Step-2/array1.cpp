// Take 2 numbers and print its sum

#include <bits/stdc++.h>
using namespace std;

// outside int main the value of undefined array element will be zero.
//[0, 0, 0, 0, 0, 0]
int arr1[6];

int main()
{
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif

  for (auto i : arr1)
  {
    cout << i << endl;
  }
  cout << endl;

  // inside int main the value of undefined array element will be garbage value.
  //[0, 0, 422736128, 22915, -1272891568, 32765]
  int arr2[6];
  for (auto i : arr2)
  {
    cout << i << endl;
  }

  return 0;
}