/* 
*
    *
        *
    *
*
    *
        *
    *
*
    *
        *
    *
*
*/


#include<bits/stdc++.h>
using namespace std;


void zigzag(int n){

    for(int k = 1; k <= n; k++){
        for(int i = 1; i < 2*n-1; i++){
            int stars = (i<=n)?i:(2*n-i);
            for(int j = 1; j <= stars; j++){
                if(j==stars)cout << "* ";
                else cout << " ";
            }
            cout << endl;
        }
    }
    cout << "* ";
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../../input.txt","r",stdin);
    freopen("../../output.txt","w",stdout);
#endif

    int num;
    cin >> num;
    zigzag(num);
}