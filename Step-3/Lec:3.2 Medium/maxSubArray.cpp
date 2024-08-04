
#include <bits/stdc++.h>
using namespace std;

vector<int> maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int maxSum = INT_MIN, sum = 0;
        int startS = -1, endS = -1, strt = 0;

        for(int i = 0; i < len; i++){
            if(sum == 0){
                strt = i;
            }
            sum += nums[i];
            if(sum > maxSum){
                maxSum = max(maxSum, sum);
                startS = strt;
                endS = i;
            }
            
            if(sum < 0)sum = 0;
        }
        cout << "Max Sum is : " << maxSum << endl;

        vector<int> maxSubArray;

        for(int i = startS; i <= endS; i++){
            maxSubArray.push_back(nums[i]);
        }
        
        return maxSubArray;
    }
int main()
{

#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif

    vector<int> temp1 = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> temp2= maxSubArray(temp1);

    for(auto it : temp2){
        cout << it << endl;
    }

    return 0;
}
