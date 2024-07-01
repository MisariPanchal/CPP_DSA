#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    pair<int, int> p = {1,3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int,int>> q = {1,{3,4}};
    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    pair<int, int> arr[] = { {1,2}, {2,5}, {5,1}};
    cout << arr[1].second << endl;

    for(auto it : arr){
        cout << "{" << it.first << ", " << it.second << "}, ";
    }
    cout << endl;

    return 0;

}