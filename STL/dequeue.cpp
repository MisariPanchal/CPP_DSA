#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    deque<int> dq = {1};

    //Adding elements
    dq.push_back(2);
    dq.emplace_back(3);
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

    //Inserting elements at desired position
    dq.insert(dq.begin()+1, 50);
    cout << "Dequeue after inserting element at desired position : ";
    for(int it : dq){
        cout << it << ",";
    }
    cout << endl;

    //Poping elements
    dq.pop_back();
    dq.pop_front();

    cout << "Dequeue after poping elements : ";
    for(int it : dq){
        cout << it << ",";
    }
    cout << endl;

    //All other functions are similar to vector

    return 0;

}