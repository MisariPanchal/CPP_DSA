/*
 Increasing Number Triangle

1
2 3
4 5 6
7 8 9 10

*/

#include<bits/stdc++.h>
using namespace std;

void nNumberTriangle(int n) {
    int count = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
                cout << count++ << " ";
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
    nNumberTriangle(num);
}