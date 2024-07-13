
#include <bits/stdc++.h>
using namespace std;


int main(){

  #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
  #endif

  string str;
  getline(cin, str);

  //pre-compute
  // map<char,int> hashmap; //takes O(log n) n--> number of elements in map
  unordered_map<char,int> hashmap;//takes O(1) for average and best case and O(n) for worst case n--> number of elements in map (Worst case happens once in a blue moon).
  for(int i = 0; i < str.length() ;i++){
    hashmap[str[i]]++;
  }

  int q;
  cin >> q;

  while(q--){
    char ch;
    cin >> ch;

    //fetch
    cout << hashmap[ch] << endl;
  }

  return 0;
}