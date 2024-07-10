#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../../../input.txt","r",stdin);
        freopen("../../../output.txt","w",stdout);
    #endif


    multiset<int> ms = {1,1,1,1,2,22,2,2,2};

    ms.insert(4);
    ms.insert(5);
    ms.insert(6);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);


    cout << "MultiSet Elements are : ";
    for(int it : ms){
        cout << it << ",";
    }
    cout << endl;

    //Erasing all the occurences of an element

    ms.erase(1);

    cout << "MultiSet Elements after erase are : ";
    for(int it : ms){
        cout << it << ",";
    }
    cout << endl;

    //Erasing only 1 occurance of an element
    ms.erase(ms.find(2));

    cout << "Erasing only 1 occurance of 2 : ";
    for(int it : ms){
        cout << it << ",";
    }
    cout << endl;

    //Erasing more than 1 occurance of 2 but not all

    //1st way
    // int i = 0;
    // int count = ms.count(2) - 1;
    // while(i<count){
    //     ms.erase(ms.find(2));
    //     i++;
    // }

    // cout << "Erasing more than 1 occurance of 2 : ";
    // for(int it : ms){
    //     cout << it << ",";
    // }
    // cout << endl;


    //2nd way
    auto it = ms.find(2);
    advance(it, 2);
    ms.erase(ms.find(2), it);

    cout << "Erasing more than 1 occurance of 2 : ";
    for(int it : ms){
        cout << it << ",";
    }
    cout << endl;

    //All other functions are similar to vector

    return 0;

}