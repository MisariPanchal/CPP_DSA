/*
Reverse Letter Triangle

A B C D
A B C
A B
A

*/

#include<bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n) {
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(char j = ch; j < ch + (n-i); j++){
            cout << j << " ";
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
    nLetterTriangle(num);
}