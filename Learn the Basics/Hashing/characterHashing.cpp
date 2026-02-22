//Brute Force Approach


#include <bits/stdc++.h>
using namespace std;

// int hasharr[1000000000];

int main()
{

#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif

  //string has only lowercase alphabets

  // string str;
  // cin >> str;

   //precompute
  // int hasharr[26] = {0};
  // for(int i = 0; i < str.length(); i++){
  //   hasharr[str[i] - 'a']++;
  // }

  // int q;
  // cin >> q;

  // while(q--){
  //   char ch;
  //   cin >> ch;

  //   //fetch
  //   cout << hasharr[ch - 'a'] << endl;
  // }

  //Any character

  string str;
  cin >> str;

  //precompute
  int hasharr[256] = {0};
  for(int i = 0; i < str.length(); i++){
    hasharr[str[i]]++;
  }

  int q;
  cin >> q;
  while(q--){
    char ch;
    cin >> ch;

    //fetch;
    cout << hasharr[ch] << endl;
  }
  
    return 0;
}
