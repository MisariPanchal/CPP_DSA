#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* back;
    
    public:
        Node(int data1, Node* next1, Node* back1){
            data = data1;
            next = next1;
            back = back1;
        }
    
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArrayToDLL(vector<int> &arr){
    int len = arr.size();

    if(len == 0)return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;
    
    for(int i = 1; i < len; i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
    
}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif
    vector<int> v1 = {1, 3, 2, 5, 6};

    Node* head = convertArrayToDLL(v1);

    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }


  return 0;
}