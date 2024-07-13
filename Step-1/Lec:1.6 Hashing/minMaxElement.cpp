
//Brute force

#include <bits/stdc++.h>
using namespace std;

void minMaxFreq(vector<int> arr){
  int len = arr.size();

  int maxFreq = 0, minFreq = len, minEle = 0, maxEle = 0;
  vector<bool> visited(len, false);
  for(int i = 0; i < len; i++){
    if(visited[i]==true) continue;

    int count = 1;
    for(int j = i+1; j < len; j++){
      if(arr[i] == arr[j]){
        visited[j] == true;
        count++;
      }
      if(count > maxFreq){
        maxFreq = count;
        maxEle = arr[i];
      }
      if(count < minFreq){
        minFreq = count;
        minEle = arr[i];
      }
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

  vector<int> arr = {1,2,3,2,1,3,32,32,32};
  minMaxFreq(arr);
  

  return 0;
}