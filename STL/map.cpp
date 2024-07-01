#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    map<int, int> mp1;
    map<int, pair<int,int>> mp2;
    map<pair<int, int>, int> mp3;

    mp1[13] = 1;
    mp1.insert({1,2});
    mp1.emplace(2,2);

    cout << "Elements of Map 1 : ";
    for(auto it : mp1){
        cout << "{" <<it.first << "," << it.second << "},";
    }
    cout << endl;
    cout << "Accessing using index : " << mp1[1] << endl;
    cout << "If key is not present : " << mp1[10] << endl;


    mp2[1] = {2,3};
    mp2.emplace(9,make_pair(2,2));
    mp2.insert({2,{1,2}});

    cout << "Elements of Map 2 : ";
    for(auto it : mp2){
        cout << "{" <<it.first << ",{" << it.second.first << "," << it.second.second << "}},";
    }
    cout << endl;
    cout << "Accessing using index : " << mp2[1].second << endl;
    cout << "If key is not present : " << mp2[10].first << endl;


    mp3.emplace(make_pair(1,4),8);
    mp3[{2,3}] = 10;
    mp3.insert({{2,1},9});

    cout << "Elements of Map 3 : ";
    for(auto it : mp3){
        cout << "{{" <<it.first.first << "," << it.first.second << "}," << it.second << "},";
    }
    cout << endl;
    cout << "Accessing using index : " << mp3[{1, 4}] << endl;
    cout << "If key is not present : " << mp3[{10, 4}] << endl;


    return 0;

}