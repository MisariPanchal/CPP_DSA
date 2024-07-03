/*

D
C D
B C D
A B C D

*/

#include<bits/stdc++.h>
using namespace std;

void alphaTriangle(int n) {
    for(int i = 0; i < n; i++){
    char ch = 'A';
        for(char j = 'A' + (n-i-1); j <= 'A' + (n-1); j++){
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
    alphaTriangle(num);
}