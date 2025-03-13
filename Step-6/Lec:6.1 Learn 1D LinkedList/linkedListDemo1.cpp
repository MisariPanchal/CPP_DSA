#include <bits/stdc++.h>
using namespace std;

//replace the word 'class' with 'struct' to create struct...
class Node{
    public:
        int data;
        Node* next;
    
    public:
        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }
    
    //If you don't want to pass nullptr everytime
    // public:
    // Node(int data1){
    //     data = data1;
    //     next = nullptr;
    // }
};

int main()
{

#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif
    vector<int> v1 = {1, 3, 2, 5, 6};

    //First Method
    Node x = Node(v1[0], nullptr);
    Node* y = &x;

    cout << "Method 1" << endl;
    cout << "Data in x : " << x.data << " Next in x : " << x.next << endl;
    cout << "Pointer y : " << y << endl;

    cout << endl;

    //Second Method
    Node* z = new Node(v1[1], nullptr);

    cout << "Method 2" << endl;
    cout << "Data in z : " << z->data << " Next in z : " << z->next << endl;


  return 0;
}