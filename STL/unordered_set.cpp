#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    unordered_set<int> us = {1,2,5,5,2,7,8};

    us.insert(10);
    us.insert(12);
    us.insert(11);
    us.insert(19);

    cout << "Elements in Unordered Set stored randomly : ";
    for(auto it : us){
        cout << it << ",";
    }
    cout << endl;

    //Erasing element
    us.erase(2);

    cout << "Elements in Unordered Set after erase : ";
    for(auto it : us){
        cout << it << ",";
    }
    cout << endl;

    //lower_bound() and upper_bound() does not work here
    // auto it = us.lower_bound(10);
    // cout << "Lower bound of 10 whose immediate greater element is not present : " << *it << endl;

    //All other functions are similar to vector

    return 0;

}