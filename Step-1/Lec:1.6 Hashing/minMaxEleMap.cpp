
//Brute force

#include <bits/stdc++.h>
using namespace std;

void minMaxFreq(vector<int> arr){
  int len = arr.size();
  
  unordered_map<int, int> map;
  for(int i = 0; i < len; i++){
    map[arr[i]]++;
  }

  int maxFreq = 0, minFreq = len, minEle = 0, maxEle = 0;

  for(auto i : map){
    int count = i.second;
    int ele = i.first;
    if(count > maxFreq){
      maxFreq = count;
      maxEle = ele;
    }
    if(count < minFreq){
      minFreq = count;
      minEle = ele;
    }
  }

  cout << "The highest frequency element is: " << maxEle << endl;
  cout << "The lowest frequency element is: " << minEle << endl;

}

int main(){

  #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
  #endif

  vector<int> arr = {2,3,2,1,3,32,32,32};
  minMaxFreq(arr);
  

  return 0;
}