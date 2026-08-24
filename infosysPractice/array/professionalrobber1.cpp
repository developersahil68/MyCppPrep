#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


// https://leetcode.com/problems/house-robber/

class Solution {
public:
    int rob(vector<int>& nums) {

    int n = nums.size();
     vector<int> dp(n);

      
     if(n == 1) return nums[0];

     dp[0] = nums[0];
     dp[1] = max(nums[0] , nums[1]);

     for(int i = 2 ; i< n ; i++) {
        dp[i] = max(dp[i-1] , dp[i-2]+nums[i]);
     } 

     return dp[n-1];
  
        
    }
};

int main() {

    // vector<int> nums = {2 , 3 , 2 , 5 , 6 , 1 , 4 , 8};
   

    return 0;
}