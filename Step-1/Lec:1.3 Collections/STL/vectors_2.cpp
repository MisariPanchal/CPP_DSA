#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../../../input.txt","r",stdin);
        freopen("../../../output.txt","w",stdout);
    #endif

    vector<int> v = {1,3,5,7,9,11,13,15};

    //it iterator does not find any value it returns 0
    vector<int>::iterator it = v.begin();

    cout << "value at begin : " << *it << endl;
    it++;
    cout << "value at it++ : " << *it << endl;
    it += 2;
    cout << "value at it shifted by 2 positions : " << *it << endl;

    cout << "Way to access vector elements : " <<v[3] << " " << v.at(3) << endl;

    cout << "Last element of vector : " << v.back() << endl;

    //Printing vector elements
    //1.Using iterator
    cout << "Using iterator : ";
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    //2.Using auto
    cout << "Using auto : ";
    for(auto it = v.begin(); it!=v.end(); it++){
        cout << *it << " ";
        // cout << typeid(it).name() << " ";
    }
    cout << endl;

    //3.Using for Each
    cout << "Using forEach : ";
    for(auto it : v){
        cout << it << " ";
        // cout << typeid(it).name() << " ";
    }
    cout << endl;

    


    // long long n = 78372689;
    // cout << typeid(n).name();

    return 0;

}