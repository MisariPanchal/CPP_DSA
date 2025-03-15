#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
        int data;
        Node* next;

    public:
        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }
        Node(int data1){
            data = data1;
            next = nullptr;
        }
};

Node* convertArrayToLL(vector<int> &arr){
    Node* head = new Node(arr[0], nullptr);
    Node* temp = head;

    for(int i = 1; i <= arr.size(); i++){
        Node* newNode = new Node(arr[i], nullptr);
        temp->next = newNode;
        temp = newNode;
    }
    

    return head;
}

int lengthOfLL(Node* head){
    Node* current = head;
    int length = 0;

    while(current->next != nullptr){
        length++;
        current = current->next;
    }

    return length;
}

bool search(Node* head, int target){
    Node* current = head;

    while(current->next != nullptr){
        if(current->data == target)return true;
        current = current->next;
    }

    return false;
}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

    vector<int> v1 = {1, 2, 4, 6, 8};

    Node* head = convertArrayToLL(v1);
    Node* current = head;

    cout << "Printing LinkedList." << endl;
    while(current->next != nullptr){
        cout << "node->data : " << current->data;
        cout << "  node->next : " << current->next << endl;

        current = current->next;
    }

    cout << endl;

    int len = lengthOfLL(head);

    cout << "Length of a LinkedList : " << len << endl;

    cout << endl;

    cout << "Is element 22 present in Linkedlist : " << search(head, 22) << endl;
    cout << "Is element 2 present in Linkedlist : " << search(head, 2) << endl;
    cout << "Is element 27 present in Linkedlist : " << search(head, 27) << endl;
    cout << "Is element 14 present in Linkedlist : " << search(head, 1) << endl;

}