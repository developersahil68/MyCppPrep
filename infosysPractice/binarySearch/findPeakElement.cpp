#include<vector>
#include<iostream>
using namespace std;

class Solution{
    public:

    int findPeak(vector<int> &nums){
        int n = nums.size();
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

        int left = 1;
        int right = n-2;

        while(left < right){

            int mid = left + (right - left)/2;

            // if(nums[mid] > nums[mid-1] && nums[mid+1]) return mid;
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) return mid;
            if(nums[mid] > nums[mid-1] ){
                left = mid+1;
            }else{
                right = mid -1;
            }
        }
      return -1;
    }

};

int main() {
    Solution sol;
    vector<int> nums = {1 , 4 , 3 , 2 , 7};

    int ans = sol.findPeak(nums);
    cout<<ans;
    return 0;
}