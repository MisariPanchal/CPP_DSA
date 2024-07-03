/*
Ninja And The Number Pattern

4444444
4333334
4322234
4321234
4322234
4333334
4444444

*/

#include<bits/stdc++.h>
using namespace std;

void getNumberPattern(int n) {
    for(int i = 1; i < 2*n; i++){
        for(int j = 1; j < 2*n; j++){
            int top = i-1;
            int bottom = 2*n-i-1;
            int left = j-1;
            int right = 2*n-j-1;
            cout << n - min(min(top, bottom), min(left, right));
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
    getNumberPattern(num);
}