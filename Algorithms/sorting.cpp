#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //they are same
    if(p1.first > p2.first) return true;
    return false;
    
}
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    //sorting an array
    int a1[] = {2,6,2,8,1,9,4,3};

    int n1 = sizeof(a1) / sizeof(a1[0]);
    sort(a1, a1 + n1);

    cout << "Sorted array elements are :";
    for(auto it : a1){
        cout << it << ",";
    }
    cout << endl;

    //sort only some portion
    int a2[] = {2,6,2,8,1,9,4,3};
    sort(a2+2, a2+5);

    cout << "Few elements sorted :";
    for(auto it : a2){
        cout << it << ",";
    }
    cout << endl;

    //sort in descending order
    int a3[] = {2,6,2,8,1,9,4,3};
    int n2 = sizeof(a3) / sizeof(a3[0]);

    sort(a3, a3+n2, greater<int>());

    cout << "Array sorted in descending order :";
    for(auto it : a3){
        cout << it << ",";
    }
    cout << endl;

    //sorting a vector
    vector<int> v1 = {2,6,2,8,1,9,4,3};
    sort(v1.begin(),v1.end());

    cout << "Sorted Vector elements are :";
    for(auto it : v1){
        cout << it << ",";
    }
    cout << endl;

    //sorting in my way '
    vector<pair<int, int>> v2 = {{1,2},{2,1},{4,1}};
    sort(v2.begin(), v2.end(), comp);

    cout << "Sorted vector in my way : ";
    for(auto it : v2){
        cout << "{" << it.first << ", " << it.second << "}, ";
    }
    cout << endl;

    return 0;

}