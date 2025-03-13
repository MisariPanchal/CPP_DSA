#include <bits/stdc++.h>
using namespace std;

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
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* covertArraytoLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif
    vector<int> v1 = {14, 3, 2, 5, 6};

    Node* head = covertArraytoLL(v1);
    cout << "head->data : "<< head->data << endl;
    

  return 0;
}