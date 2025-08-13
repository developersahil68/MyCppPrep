#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,1,3,5,6,4};

    int n = nums.size();

    if(n==1) return 0;
    if(nums[0] > nums[1]) return 0;
    if(nums[n-1] > nums[n-2]) return n-1;

    int low = 1;
    int high = n-2;

    while(low<=high){
        int mid =  low + (high - low) / 2;

        if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
            cout<<mid;
            return mid;
        }else if(nums[mid] > nums[mid+1]){
            high=mid-1;
        }else if(nums[mid] > nums[mid-1]){
            low=mid+1;
        }

    }

    return 0;
}