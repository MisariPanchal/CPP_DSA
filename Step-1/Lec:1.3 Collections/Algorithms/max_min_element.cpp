#include<bits/stdc++.h>
using namespace std;

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../../../input.txt","r",stdin);
        freopen("../../../output.txt","w",stdout);
    #endif

    vector<int> v = {1,10,7,2,9,4,4,9,2,6,0,1};

    cout << "Max element of vector v : " <<*max_element(v.begin(), v.end()) << endl;
    cout << "Min element of vector v : " <<*min_element(v.begin(), v.end()) << endl;

    return 0;

}