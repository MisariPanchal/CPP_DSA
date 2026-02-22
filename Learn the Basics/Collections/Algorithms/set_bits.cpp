#include<bits/stdc++.h>
using namespace std;

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../../../input.txt","r",stdin);
        freopen("../../../output.txt","w",stdout);
    #endif

    int num1 = 7;
    int cnt1 = __builtin_popcount(num1);

    cout <<"Set bits for number 7 : " << cnt1 << endl;

    long long num2 = 628738526598726;
    int cnt2 = __builtin_popcountll(num2);

    cout <<"Set bits for long long number : " << cnt2 << endl;


    return 0;

}