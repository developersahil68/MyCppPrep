#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;

    int n = nums.size();

    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid =  low + (high - low) / 2;

        // fisrt check if left part is sorted
        if(nums[low] <= nums[mid]){
            // check if our target is in this part 

            if(nums[low]<= target && nums[mid] >= target){
                high = mid-1;
            }else{
                low = mid + 1;
            }

        }else{ // means right part is sorted
            if(nums[mid] <=  target && nums[high] >= target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
    }

    return 0;
}