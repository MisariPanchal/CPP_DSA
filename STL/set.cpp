#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    //sorted, unique
    set<int> dsa_set = {1,2,4};

    dsa_set.insert(3);
    dsa_set.insert(5);
    dsa_set.insert(3);
    dsa_set.insert(23);
    dsa_set.emplace(10);
    dsa_set.emplace(11);

    //returns an iterator pointing element 3
    auto it1 = dsa_set.find(3);

    //if the set does not contain the element it returns garbage value
    auto it2 = dsa_set.find(9);
    // cout << "If element not present (garbage value) : " << *it1 <<endl;
    cout << "If element not present (total num of elements) : " << *it2 <<endl;

    cout << "Unique elements of set : ";
    for(int it : dsa_set){
        cout << it << ",";
    }
    cout << endl;

    //Erases(deletes) the element from set
    dsa_set.erase(10);

    cout << "Unique elements of set after erase : ";
    for(int it : dsa_set){
        cout << it << ",";
    }
    cout << endl;

    //count() --> since set contains unique elements
    //so if element is present than it will return 1 otherwise 0

    cout << dsa_set.count(3) << endl;
    cout << dsa_set.count(30) << endl;

    //erasing series of elements
    set<int> dsa_set1 = {1,2,3,4,5,6,7};
    dsa_set1.erase(dsa_set1.find(2), dsa_set1.find(5));

    cout << "Unique elements of set after erasing couple of elements : ";
    for(int it : dsa_set1){
        cout << it << ",";
    }
    cout << endl;

    //lower_bound() and upper_bound()
    auto it3 = dsa_set1.lower_bound(2);
    cout << "Lower bound of 2 which is not present in set : " << *it3 << endl;
    it3 = dsa_set1.upper_bound(2);
    cout << "Upper bound of 2 which is not present in set : " << *it3 << endl;

    auto it4 = dsa_set1.lower_bound(6);
    cout << "Lower bound of 6 which is present : " << *it4 << endl;
    it4 = dsa_set1.upper_bound(6);
    cout << "Upper bound of 6 which is present : " << *it4 << endl;

    //returns index
    auto it5 = dsa_set1.lower_bound(10);
    cout << "Lower bound of 10 whose immediate greater element is not present : " << *it5 << endl;
    it5 = dsa_set1.upper_bound(10);
    cout << "Upper bound of 10 whose immediate greater element is not present : " << *it5 << endl;

    //All other functions are similar to vector

    return 0;

}