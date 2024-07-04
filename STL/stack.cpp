#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    // stack<int> st = {1,2}; this is not possible
    // stack<int> st = {1}; this is also not possible

    stack<int> st1;

    //Adding elements
    st1.push(3);
    st1.push(9);
    st1.push(7);
    st1.push(7);
    st1.emplace(5);

    //Top element of stack
    cout << "Top element of st1 : " <<st1.top() << endl;
    
    //Size of stack 
    cout << "Size of st1 : " << st1.size() << endl;

    cout << "st1 elements : ";
    while(!st1.empty()){
        cout << st1.top() << ",";
        st1.pop();
    }
    cout << endl;

    //Check whether stack is empty or not
    cout << "Is st1 empty ? --> " << st1.empty() << endl;

    //Swapping 2 st1acks
    stack<int> st2;

    st2.push(11);
    st2.push(12);
    st2.push(13);
    st2.push(14);
    st2.push(15);
    st2.push(16);

    stack<int> st3;

    st3.push(21);
    st3.push(22);
    st3.push(23);
    st3.push(24);
    st3.push(25);
    st3.push(26);

    st2.swap(st3);

    cout << "st2 after swapping : ";
    while (!st2.empty())
    {
        cout << st2.top() << ",";
        st2.pop();
    }
    cout << endl;

    cout << "st3 after swapping : ";
    while (!st3.empty())
    {
        cout << st3.top() << ",";
        st3.pop();
    }
    cout << endl;

    //All other functions are similar to vector

    return 0;

}