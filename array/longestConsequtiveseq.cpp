// Given an array nums of n integers, return the length of the longest sequence of consecutive integers. The integers in this sequence can appear in any order.

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
    // vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    vector<int> nums = {1,0,1,2};
    int n = nums.size();

    sort(nums.begin() , nums.end());
    int count = 1;
   int  maxCount = 1;
    
       for(int j = 0 ; j < n-1 ; j++){
        if(nums[j+1] == nums[j] +1  ){
            count++;
            maxCount = max(count , maxCount);
        }else if(nums[j+1] != nums[j]){
            count=1;
        }
       }

    cout<<maxCount;
    return 0;
};