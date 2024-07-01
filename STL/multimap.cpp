#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif


    multimap<int, int> mp;

    mp.insert({1,2});
    mp.emplace(1,2);

    cout << "Multimap Elements : ";
    for(auto it : mp){
        cout << "{" <<it.first << "," << it.second << "}, ";
    }
    cout << endl;

    //All other functions are similar to vector

    return 0;

}