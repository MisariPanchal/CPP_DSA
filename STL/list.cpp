#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    list<int> ls = {1,2,4};

    ls.push_back(2);
    ls.emplace_back(5);

    ls.push_front(10);
    ls.emplace_front(9);

    cout << "List after adding elements front and back : ";
    for(int it : ls){
        cout << it << ",";
    }
    cout << endl;

    ls.pop_back();
    ls.pop_front();

    cout << "List after popping elements front and back : ";
    for(int it : ls){
        cout << it << ",";
    }
    cout << endl;

    //insert ma begin+1 evu nai thay kemke aama index through access nathi thatu
    auto it = ls.begin();

    //it++ kato begin()+1 ni jagya e aavu karay
    advance(it, 1);
    ls.insert(it, 2, 40);

    cout << "List after inserting elements : ";
    for(int it : ls){
        cout << it << ",";
    }
    cout << endl;

    //All other functions are similar to vector

    return 0;

}