/*
Star Triangle

   *
  ***
 *****
*******

*/

#include<bits/stdc++.h>
using namespace std;

void nStarTriangle(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i); j++){
            cout << " ";
        }
        for(int j = 1; j < 2*i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../../input.txt","r",stdin);
    freopen("../../output.txt","w",stdout);
#endif

    int num;
    cin >> num;
    nStarTriangle(num);
}