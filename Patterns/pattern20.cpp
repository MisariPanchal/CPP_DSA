#include<bits/stdc++.h>
using namespace std;

void symmetry(int n) {
    // Write your code here.
    for(int i = 0; i<2*n; i++){
        int stars, spaces;

        (i<n)? stars=i+1: stars=2*n-i-1;
        (i<n)? spaces=2*(n-i-1):spaces=2*(i-n+1);

        for(int j = 0; j<stars; j++){
            cout << "*";
        }
        for(int j = 0; j<spaces; j++){
            cout << " ";
        }
        for(int j = 0; j<stars; j++){
            cout << "*";
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
        symmetry(num);

}