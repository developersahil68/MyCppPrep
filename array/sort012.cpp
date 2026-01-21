#include<iostream>
#include<vector>
using namespace std;

//new solution via dutch national flag method (DNF)

class Solution {
    public:
      void sortColors(vector<int> &nums) {
         int low = 0;
         int mid = 0;
         int high = nums.size() - 1;

         while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low] , nums[mid]);
                low++;
                mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else{
                swap(nums[mid] , nums[high]);
                high--;
            }
         }
      }
};


// old sollution 
int main()
{
    vector<int> nums = {1, 0, 2, 1, 0};

    Solution sol;

    sol.sortColors(nums);

    // for(int i = 0 ;i < nums.size() - 1; i++){
    //     for(int j = 0 ; j < nums.size() - 1 -i; j++){

    //         if(nums[j] > nums[j+1]){
    //           swap(nums[j] ,  nums[j+1]);
    //         }
    //     }
    // }

    for(int k = 0 ; k < nums.size() ; k++) {
        cout<<nums[k];
    }

    return 0;
};