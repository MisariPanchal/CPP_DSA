#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    //By default the pq is max heap i.e. largest element on top
    priority_queue<int> pq1;

    //Adding elements
    pq1.push(6);
    pq1.push(3);
    pq1.push(35);
    pq1.push(23);
    pq1.push(89);
    pq1.emplace(2);

    cout << "Top most element : " << pq1.top() << endl;

    pq1.pop();
    cout << "Top most element after pop() : " << pq1.top() << endl;

    cout << "Maximum heap PQ : ";
    while(!pq1.empty()){
        cout << pq1.top() << ",";
        pq1.pop();
    }
    cout << endl;

    //Storing smallest element on top
    priority_queue<int, vector<int>, greater<int>> pq2;

    pq2.push(67);
    pq2.push(94);
    pq2.push(1);
    pq2.push(87);

    cout << "Minimum heap PQ : ";
    while(!pq2.empty()){
        cout << pq2.top() << ",";
        pq2.pop();
    }
    cout << endl;

    //All other functions are similar to vector

    return 0;

}