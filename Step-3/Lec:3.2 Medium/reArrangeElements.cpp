#include <bits/stdc++.h>
using namespace std;

vector<int> alternateNumbers(vector<int>& arr){
  int len = arr.size();
  vector<int> pos, neg, ans(len, 0);

  for(int i = 0; i < len; i++){
    if(arr[i] > 0)pos.push_back(arr[i]);
    else neg.push_back(arr[i]);
  }

  if(pos.size() > neg.size()){
    for(int i = 0; i < neg.size(); i++){
      ans[2*i] = pos[i];
      ans[2*i + 1] = neg[i];
    }

    int index = neg.size() * 2;
    for(int i = neg.size(); i < pos.size(); i++){
      ans[index] = pos[i];
      index++;
    }
  }
  else{
    for(int i = 0; i < pos.size(); i++){
      ans[2*i] = pos[i];
      ans[2*i + 1] = neg[i];
    }

    int index = pos.size() * 2;
    for(int i = pos.size(); i < neg.size(); i++){
      ans[index] = neg[i];
      index++;
    }
  }
  return ans;

}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  vector<int> temp1 = {-1, 2, 3, 4, -3, 1};
  vector<int> temp2 = alternateNumbers(temp1);

  for (auto it : temp2)
  {
    cout << it << endl;
  }

  return 0;
}