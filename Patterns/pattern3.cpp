/*
N-Triangles

1
1 2 
1 2 3
1 2 3 4

*/

#include<bits/stdc++.h>
using namespace std;

void nTriangle(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
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
    nTriangle(num);
}