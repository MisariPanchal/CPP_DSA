#include<bits/stdc++.h>
using namespace std;

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../../../input.txt","r",stdin);
        freopen("../../../output.txt","w",stdout);
    #endif

    //Simple vector declaration
    vector<int> v1;

    v1.push_back(1);
    v1.emplace_back(2);

    cout << "v1 : ";
    for(int i = 0; i<v1.size(); i++){
        cout << v1[i] << ",";
    }
    cout << endl;

    //vector of pairs
    vector<pair<int, int>> v2;

    v2.push_back({1,2});
    v2.emplace_back(3,4);

    cout << "v2 : ";
    for(int i = 0; i<v2.size(); i++){
        cout << "{" << v2[i].first << "," << v2[i].second << "},";
    }
    cout << endl;

    //vector of similar values
    vector<int> v3(5,100);

    cout << "v3 : ";
    for(int i = 0; i<v3.size(); i++){
        cout << v3[i] << ",";
    }
    cout << endl;

    //vector of 0's
    //push_back() karsu to e 0 ne overwrite nai kare but pachad append karse.
    vector<int> v4(5);
    v4.push_back(7);

    cout << "v4 : ";
    for(int i = 0; i<v4.size(); i++){
        cout << v4[i] << ",";
    }
    cout << endl;

    //vector which is copy of another vector
    vector<int> v5(v1);

    cout << "v5 : ";
    for(int i = 0; i<v5.size(); i++){
        cout << v5[i] << ",";
    }
    cout << endl;

    return 0;

}