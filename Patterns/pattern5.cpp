/*
Seeding

* * * *
* * *
* *
*

*/

#include<bits/stdc++.h>
using namespace std;

void seeding(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n-i); j++){
            cout << "* ";
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
    seeding(num);
}