/*
Triangle

1
2 2 
3 3 3
4 4 4 4

*/

#include<bits/stdc++.h>
using namespace std;

void triangle(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
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
    triangle(num);
}