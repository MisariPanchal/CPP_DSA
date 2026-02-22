/*
Star Diamond

   *
  ***
 *****
*******
*******
 ***** 
  ***
   *

*/

#include<bits/stdc++.h>
using namespace std;

void nStarDiamond(int n){
    for(int i = 1; i <= 2*n; i++){
        int stars, spaces;
        (i <= n) ?  stars = 2*i - 1:  stars = 2*(2*n-i) + 1;
        (i <= n) ? spaces = (n-i) : spaces = (i-n-1);
        for(int j = 1; j <= spaces; j++){
            cout << " ";
        }
        for(int j = 1; j <= stars; j++){
            cout << "*";
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
    nStarDiamond(num);
}