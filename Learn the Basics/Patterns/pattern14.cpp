/*
Increasing Letter Triangle

A
A B
A B C
A B C D

*/

#include<bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n) {
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(char j = ch; j <= ch+i; j++){
            cout << j << " ";
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
    nLetterTriangle(num);
}