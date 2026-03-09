#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {2,5,6,0,0,1,2};
    int target = 0;

    int n = nums.size();
    int low = nums[0];
    int high = nums[n-1];


    while(low <= high){
        int mid = low + high >> 1;
        if(nums[mid] == target) {
             cout<<true;
        };
        if(nums[mid] == nums[low] && nums[mid] == high){
            low++;
            high--;
            continue;
        }

        if(nums[mid] >= nums[low]){

            if(target >= nums[low ] && nums[mid] >= target ){
                high = mid -1;
                
            }else{
                low = mid +1;
            }
        }else{
              if(nums[mid] <=  target && nums[high] >= target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
    }
 cout<<false;

    return 0;
}