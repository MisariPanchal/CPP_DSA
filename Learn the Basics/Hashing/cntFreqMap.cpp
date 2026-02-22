
//Optimized
#include <bits/stdc++.h>
using namespace std;

void countFreq(vector<int> arr){
  int len = arr.size();

  map<int, int> map;
  for(int i = 0; i < len; i++){
    map[arr[i]]++;
  }
  for(auto i : map){
    cout << i.first << " : " << i.second << endl;
  }

}

int main(){

  #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
  #endif

  vector<int> arr = {1,2,3,2,1,3,15,20,15,14,32};
  countFreq(arr);
  

  return 0;
}