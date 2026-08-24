#include<vector>
#include<iostream>
using namespace std;

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        // sliding window + prefixsum
        int maxCount = 0;
        int prefixSum = nums[0];
        int i = 0;
        int j = 1;
        if(prefixSum == k)  maxCount = 1;

        while(i <= j && j < nums.size()){
            prefixSum += nums[j];
           if(prefixSum == k){
            int count = j -i+1;
            maxCount = max(maxCount , count);
            prefixSum -= nums[i];
            i++;
           }
           j++;
        }
        return maxCount == 0 ? -1 : maxCount;
    }
};


int main() {

    // vector<int> nums = {10, 5, 2, 7, 1, 9};
    vector<int> nums = {-3, 2, 1};
    int k = 6;
    Solution st;

  int ans =   st.longestSubarray(nums , k);

  cout<<ans;
    return 0;
}