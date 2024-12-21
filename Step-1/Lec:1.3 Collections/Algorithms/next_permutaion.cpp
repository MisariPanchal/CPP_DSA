#include<bits/stdc++.h>
using namespace std;

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../../../input.txt","r",stdin);
        freopen("../../../output.txt","w",stdout);
    #endif

    string s1 = "231";

    cout << "Permutaions before sorting: ";
    do{
        cout << s1 << ", ";
    }while(next_permutation(s1.begin(), s1.end()));
    cout << endl;

    string s2 = "231";

    sort(s2.begin(), s2.end());
    cout << "Sorted numbered string : " << s2 << endl;

    cout << "Permutaions after sorting : ";
    do{
        cout << s2 << ", ";
    }while(next_permutation(s2.begin(), s2.end()));
    cout << endl;

    return 0;

}