#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../../../input.txt","r",stdin);
        freopen("../../../output.txt","w",stdout);
    #endif

    // queue<int> q = {1,2}; Not possible
    // queue<int> q = {1}; Not possible

    queue<int> q ;

    //Adding elements
    q.push(1);
    q.push(2);
    q.push(2);
    q.emplace(4);

    cout << "First element of queue : " << q.front() << endl;
    cout << "Last element of queue : " << q.back() << endl;

    //manipulating last element of queue
    q.back() += 5;

    cout << "Last element of queue after manipulation : " << q.back() << endl;

    
    //front element after pop()
    q.pop();
    cout << "First element after pop() : " << q.front() << endl;

    //printing queue elements
    cout << "Queue elements : ";
    while(!q.empty()){
        cout << q.front() << ",";
        q.pop();
    }
    cout << endl;

    //All other functions are similar to vector

    return 0;

}