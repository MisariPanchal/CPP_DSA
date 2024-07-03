/*
Alpha Hill

      A
    A B A
  A B C B A
A B C D C B A

*/

#include<bits/stdc++.h>
using namespace std;

// void alphaHill(int n) {
//     char ch = 'A';
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < 2*(n-i-1); j++){
//             cout << " ";
//         }
//         for(char j = 'A'; j <= 'A'+i; j++){
//             cout << j << " ";
//         }
//         for(char j = 'A'+i-1; j >= 'A'; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }
void alphaHill(int n) {
    for(int i = 0; i < n; i++){
        char ch = 'A';
        for(int j = 0; j < 2*(n-i-1); j++){
            cout << " ";
        }
        int breakpoint = (2*i)/2;
        for(int j = 0; j < 2*i+1; j++){
            cout << ch << " ";
            (j < breakpoint) ? ch++ : ch-- ;
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
    alphaHill(num);
}