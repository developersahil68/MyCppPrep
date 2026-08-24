#include<iostream>
#include<vector>
using namespace std;

class Solution {
    private:
    int roblinear(vector<int> &nums , int start , int end){
            vector<int> arr;

    for(int i = start; i <= end; i++) {
        arr.push_back(nums[i]);
    }

    int n = arr.size();
     if(n == 1) return arr[0];

    vector<int> dp(n);

    dp[0] = arr[0];
    dp[1] = max(arr[1] , arr[0]);

    for(int i = 2 ; i < n ; i++) {
        dp[i] = max(dp[i-1] , dp[i-2]+arr[i]);
    }

    return dp[n-1];

    }
public:
    int rob(vector<int>& nums) {
    int n = nums.size();

    if(n==1) return nums[0];

    // acse 1 exclude last house
     int case1 = roblinear(nums , 0 , n-2);

     // acse 2 include last house
     int case2 = roblinear(nums , 1 , n-1);

     return max(case1 , case2);
    }
};