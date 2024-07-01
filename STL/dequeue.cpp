#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    deque<int> dq = {1};

    dq.push_back(2);
    dq.emplace_back(3);

    dq.push_front(4);
    dq.emplace_front(5);

    cout << "Dequeue after adding elements in front and back : ";
    for(int it : dq){
        cout << it << ",";
    }
    cout << endl;

    cout << "Back : " << dq.back() << endl;
    cout << "Front : " << dq.front() << endl;

    dq.insert(dq.begin()+1, 50);
    cout << "Dequeue after inserting element at desired position : ";
    for(int it : dq){
        cout << it << ",";
    }
    cout << endl;

    //All other functions are similar to vector

    return 0;

}