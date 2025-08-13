#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    int n = nums.size();

    int low = 0;
    int high = n-1;
    int ans = INT_MAX;

    while(low<=high){
        int mid =  low + (high - low) / 2;

        // fisrt check if left part is sorted
        if(nums[low] <= nums[mid]){


            ans =min(ans ,  nums[low]);
            low=mid+1;
          
        }else{ // means right part is sorted
          ans = min(ans , nums[mid]);
          high = mid-1;
        }
    }
  cout<<ans;
    return 0;
}