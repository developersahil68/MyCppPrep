#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,1,2,3,3,4,4,8,8};

    int n = nums.size();

    if(n==1) return nums[0];
    if(nums[0] != nums[1]) return nums[0];
    if(nums[n-1] != nums[n-2]) return nums[n-1];

    int low = 1;
    int high = n-2;

    while(low<=high){
        int mid =  low + (high - low) / 2;

      if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]){
        cout<<nums[mid];
        return nums[mid];
      }

      if((mid%2==1 && nums[mid] == nums[mid-1]) || (mid%2==0  && nums[mid+1] == nums[mid])){
        low=mid+1;
      }else{
        high=mid-1;
      }
    }

    return 0;
}