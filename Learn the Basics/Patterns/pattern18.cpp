/*
Alpha-Triangle

D
D C
D C B 
D C B A

*/

#include<bits/stdc++.h>
using namespace std;

void alphaTriangle(int n) {
    for(int i = 0; i < n; i++){
    char ch = 'A' + n - 1;
        for(int j = 0; j <= i; j++){
            cout << ch-- << " ";
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
    alphaTriangle(num);
}