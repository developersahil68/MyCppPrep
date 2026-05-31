#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return atMost(nums , k) - atMost(nums , k-1);
     
    }

    int atMost(vector<int>& nums , int k ){
        int left = 0;
        map<int, int> mpp;
        int ans = 0;

        for(int r = 0 ; r < nums.size() ; r++){

            mpp[nums[r]]++;


            while(mpp.size() > k){
                mpp[nums[left]]--;

                if(mpp[nums[left]] == 0){
                    mpp.erase(nums[left]);
                }
                left++;
            }

            
            if(mpp.size() <= k){
                ans = ans + (r - left + 1) ;
             
            }
        }
        return ans;   
    }
};