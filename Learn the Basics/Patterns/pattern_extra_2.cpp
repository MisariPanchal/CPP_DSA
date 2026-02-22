/* 
*
    *
        *
    *
*
    *
        *
    *
*
    *
        *
    *
*
*/


#include<bits/stdc++.h>
using namespace std;


void zigzag(int n){

    for(int i = 0; i < 2*(n-1)*n+1; i++){
        int div = 2*(n-1);
        int rem = i % div;
        int space;
         if(rem<=n-1){
            space = rem;
         }
         else{
            space = 2*(n-1)-rem;
         }
         for(int j = 0; j < space; j++){
            cout << " ";
         }
         cout << "*" << endl;

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
    zigzag(num);
}