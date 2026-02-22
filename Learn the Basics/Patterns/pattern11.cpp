/*
Binary Number Triangle

1
0 1
1 0 1
0 1 0 1

*/

#include<bits/stdc++.h>
using namespace std;

void nBinaryTriangle(int n) {
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            (i+j)%2 == 0 ? cout << "1 " : cout << "0 " ;
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
    nBinaryTriangle(num);
}