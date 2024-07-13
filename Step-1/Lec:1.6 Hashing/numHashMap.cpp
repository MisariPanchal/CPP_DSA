//Brute Force Approach


#include <bits/stdc++.h>
using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }

    //precompute
    map<int, int> hashmap;
    for(int i = 0; i < n; i++){
      hashmap[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
      int number;
      cin >> number;

      //fetch
      cout << hashmap[number] << endl;
    }
    

    return 0;
}
