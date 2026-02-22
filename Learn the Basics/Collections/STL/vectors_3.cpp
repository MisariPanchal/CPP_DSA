#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../../../input.txt","r",stdin);
        freopen("../../../output.txt","w",stdout);
    #endif

    //Erasing a single element 
    vector<int> v1 = {10,20,30,40,50};

    v1.erase(v1.begin()+1);

    cout << "Vector after erasing '20' : ";
    for(int it : v1){
        cout << it << ",";
    }
    cout << endl;

    //Erasing series of elements 
    //v.erase(start, end); 'end not included'
    vector<int> v2 = {1,2,3,4,5};

    v2.erase(v2.begin() + 1, v2.end() - 1);

    cout << "Vector after erasing series of elements : ";
    for(int it : v2){
        cout << it << ",";
    }
    cout << endl;

    //Inserting single element
    vector<int> v3 = {1,2,3};

    v3.insert(v3.begin() + 1, 100);

    cout << "Vector after inserting an element : ";
    for(int it : v3){
        cout << it << ",";
    }
    cout << endl;

    //Inserting more than 1 instance of same element
    //v.insert(start, instances, value);
    //v.insert(v4.begin() + 1, 2, 100, 200); (Not possible)
    vector<int> v4 = {1,9,4,6,2};

    v4.insert(v4.begin() + 1, 2, 100);

    cout << "Vector after inserting more than 1 instance of same element : ";
    for(int it : v4){
        cout << it << ",";
    }
    cout << endl;

    //copying elements of other vector 
    vector<int> v5 = {100,200,300,400};
    vector<int> copy = {5,5};

    v5.insert(v5.begin(), copy.begin(), copy.end());

    cout << "Vector after copying other vector : ";
    for(int it : v5){
        cout << it << ",";
    }
    cout << endl;

    //Size of vector
    cout << "The size of vector is : " << v5.size() << endl;

    //Poping an element
    v5.pop_back();

    cout << "Vector after poping an element : ";
    for(int it : v5){
        cout << it << ",";
    }
    cout << endl;

    //Swapping 2 vectors
    vector<int> v6 = {1,2};
    vector<int> v7 = {3,4};

    v6.swap(v7);

    cout << "Vector6 after swapping : ";
    for(int it : v6){
        cout << it << ",";
    }
    cout << endl;

    cout << "Vector7 after swapping : ";
    for(int it : v7){
        cout << it << ",";
    }
    cout << endl;

    //clearing a vector
    v7.clear();

    cout << "Vector7 after clear() : ";
    for(int it : v7){
        cout << it << ",";
    }
    cout << endl;

    //Check if a vector is empty or not
    //returns 0 if not empty and 1 if empty
    cout << "Is v6 empty ? -> " << v6.empty() << endl;
    cout << "Is v7 empty ? -> " << v7.empty() << endl;


    return 0;

}