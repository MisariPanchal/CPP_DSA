#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif


    unordered_map<int, int> mp;

    mp.insert({1,2});
    mp.emplace(1,2);
    mp.emplace(10,2);
    mp.insert({4,2});
    mp.emplace(8,2);
    mp.emplace(3,2);

    cout << "Unordered Map Elements : ";
    for(auto it : mp){
        cout << "{" <<it.first << "," << it.second << "}, ";
    }
    cout << endl;

    //All other functions are similar to vector

    return 0;

}