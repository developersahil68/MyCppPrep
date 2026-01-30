
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {2 , 1 , 5 , 4 , 3 , 0 , 0};
   int n = nums.size();
    int idx = -1;

    for(int i = n -2 ; i >= 0 ; i--){
      if(nums[i] < nums[i+1]){
        idx = i;
        break;
      }
    }

    if(idx == -1){
        reverse(nums.begin() , nums.end());
       // return nums;
    }

    for(int i = n-1 ; i > nums[idx] ; i--){
        if(nums[idx] < nums[i]){
          swap(nums[idx] , nums[i]);
          break;
        }
    }

    reverse(nums.begin() + idx + 1 , nums.end());
 
    for(int i = 0 ; i < n ; i++) {
        cout<<nums[i];
    }
    return 0;
}