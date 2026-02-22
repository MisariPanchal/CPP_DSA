/*
Ninja And The Star Pattern I

****
*  *
*  *
****

*/

#include<bits/stdc++.h>
using namespace std;

void getStarPattern(int n) {
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i==1 || j==1 || i==n || j==n) cout << "*";
            else cout << " ";
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
    getStarPattern(num);
}