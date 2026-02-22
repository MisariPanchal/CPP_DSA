#include <bits/stdc++.h>
using namespace std;

void heapify_up(vector<int>& nums, int ind){
    int parent = (ind-1)/2;
    if(ind > 0){
        if(nums[parent] < nums[ind]){
            swap(nums[parent], nums[ind]);
            heapify_up(nums, parent);
        }
    }
}
void heapify_down(vector<int>& nums, int ind){
    int n = nums.size();
    int smallest = ind;
    int lChild = (2*ind)+1, rChild = (2*ind)+2;

    if(lChild < n && nums[lChild] > nums[smallest]){
        smallest = lChild;
    }
    if(rChild < n && nums[rChild] > nums[smallest]){
        smallest = rChild;
    }

    if(smallest != ind){
        swap(nums[smallest], nums[ind]);
        heapify_down(nums, smallest);
    }
}
void heapify(vector<int> &nums, int ind, int val)
{
    if(nums[ind] < val){
        nums[ind] = val;
        heapify_up(nums, ind);
    }
    else{
        nums[ind] = val;
        heapify_down(nums, ind);
    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    vector<int> arr = {6, 5, 5, 4, 1, 4, 0, 3, 2};

    cout << "Input array: ";
    for(int it : arr) cout << it << " ";
    cout << endl;
    
    int ind = rand() % (arr.size()-1);
    int val = rand() % (100);
    cout << ind << " " << val << endl;
    
    heapify(arr, ind, val);
    
    cout << "Modified array: ";
    for(int it : arr) cout << it << " ";

    return 0;
}
