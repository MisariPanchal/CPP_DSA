
//Brute force

#include <bits/stdc++.h>
using namespace std;

void countFreq(vector<int> arr){
  int len = arr.size();

  vector<bool> visited(len, false);
  for(int i = 0; i < len; i++){
    if(visited[i]==true) continue;

    int count = 1;
    for(int j = i+1; j < len; j++){
      if(arr[i] == arr[j]){
        visited[j] == true;
        count++;
      }
    }
    cout << arr[i] << " : " << count << endl;
  }

}

int main(){

  #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
  #endif

  vector<int> arr = {1,2,3,2,1,3};
  countFreq(arr);
  

  return 0;
}