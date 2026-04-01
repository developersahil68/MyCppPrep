#include<vector>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int maxLen = 0;
        int zeros = 0;
        int left = 0;
        int right =0;

        while(right < nums.size()){
            if(nums[right] == 0){
                zeros++;
            }
            while(zeros > k){
                if(nums[right] == 0) {
                    zeros--;
                }
                left++;
            }
            if(zeros <= k){
                int len = right - left +1;
                maxLen = max(maxLen , len);
            }
            right++;
        }
        return maxLen;
        
    }
};