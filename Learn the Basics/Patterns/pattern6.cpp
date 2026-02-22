/*
Reverse Number Triangle

1 2 3 4
1 2 3
1 2
1

*/

#include<bits/stdc++.h>
using namespace std;

void nNumberTriangle(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i)+1; j++){
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
    nNumberTriangle(num);
}