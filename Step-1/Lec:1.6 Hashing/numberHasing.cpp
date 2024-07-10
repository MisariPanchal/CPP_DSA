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

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }

    //precompute
    // int hasharr[10000000] = {0};
    int hasharr[13] = {0};
    for(int i = 0; i < n; i++){
      hasharr[arr[i]]++;
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
      int number;
      cin >> number;

      //fetch
      cout << hasharr[number] << endl;
    }
    

    return 0;
}
