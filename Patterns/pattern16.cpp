/*
Alpha-Ramp

A
B B
C C C
D D D D

*/

#include<bits/stdc++.h>
using namespace std;

void alphaRamp(int n) {
    for(int i = 0; i < n; i++){
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++){
            cout << ch << " ";
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
    alphaRamp(num);
}