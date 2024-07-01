#include<bits/stdc++.h>
using namespace std;

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    string s = "231";

    cout << "Permutaions before sorting: ";
    do{
        cout << s << ", ";
    }while(next_permutation(s.begin(), s.end()));
    cout << endl;

    sort(s.begin(), s.end());
    cout << "Sorted numbered string : " << s << endl;

    cout << "Permutaions after sorting : ";
    do{
        cout << s << ", ";
    }while(next_permutation(s.begin(), s.end()));
    cout << endl;

    return 0;

}