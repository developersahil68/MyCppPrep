#include<vector>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
      
      return atMost(nums , goal) - atMost(nums, goal - 1);
    }

   private:
    int atMost(vector<int>& nums, int goal) {
        if(goal < 0) return 0;

       int left =0 , sum =0  ,count =0;

          
       for(int r = 0 ; r < nums.size() ; r++){
        sum += nums[r];

        while(sum > goal){
            sum -= nums[left];
            left++;
        }
        count += (r-left+1);
     
       }
       return count;
    }
};