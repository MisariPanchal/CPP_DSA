/*
Rotated Triangle

*
**
***
****
***
**
*

*/

#include<bits/stdc++.h>
using namespace std;

void nStarTriangle(int n) {
    for(int i = 1; i < 2*n; i++){
        int stars = (i <= n) ? i : 2*n-i ;
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
#endif

    int num;
    cin >> num;
    nStarTriangle(num);
}