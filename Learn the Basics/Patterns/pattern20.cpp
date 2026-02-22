/*
Symmetry

*             *
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

*/

#include<bits/stdc++.h>
using namespace std;

// void symmetry(int n) {
//     for(int i = 0; i<2*n; i++){
//         int stars, spaces;

//         (i<n)? stars=i+1: stars=2*n-i-1;
//         (i<n)? spaces=2*(n-i-1):spaces=2*(i-n+1);

//         for(int j = 0; j<stars; j++){
//             cout << "*";
//         }
//         for(int j = 0; j<spaces; j++){
//             cout << " ";
//         }
//         for(int j = 0; j<stars; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
void symmetry(int n) {
    for(int i = 1; i < 2*n; i++){
        int stars = (i<=n) ? i : 2*n-i;
        int spaces = (i<=n)? 2*(n-i) : 2*(i-n) ;

        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
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
    symmetry(num);
}