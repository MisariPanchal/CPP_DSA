#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &nums, int target){
    int len = nums.size();

    for(int i = 0; i < len; i++){
        if(nums[i] > target){
            return i;
        }
    }
    return len;
}

int upperBound(vector<int> &nums, int target){
    int len = nums.size();
    int low = 0, high = len - 1;
    int ans = len;

    while(low <= high){
        int mid = (low + high) / 2;

        if(nums[mid] > target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}

int upperBoundRecusrsive(vector<int> &nums, int low, int high, int target, int ans){
    if(low > high)return ans;

    int mid = (low + high) / 2;

    if(nums[mid] > target){
        ans = mid;
        return upperBoundRecusrsive(nums, low, mid - 1, target, ans);
    }
    else{
        return upperBoundRecusrsive(nums, mid + 1, high, target, ans);
    }
}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  vector<int> arr = {3,5,8,15,19};
  int target = 8;

  // 4.
  int len = arr.size();
  int ans = len;

// 1. Using STL 
// cout << upper_bound(arr.begin(), arr.end(), target) - arr.begin();

// 2. Linear Search
// cout << linearSearch(arr, target);

// 3. Binary Search
// cout << upperBound(arr, target);

// 4. Binary Search Recursive
cout << upperBoundRecusrsive(arr, 0, len - 1, target, ans);


  return 0;
}