#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.

int main()
{
    // vector<int> nums = {2 , 5 , 3 , 9 , 7 , 4};
    // vector<int> nums =  {10, 5, 2, 7, 1, 9};
    vector<int> nums =  {-3, 2, 1};
    int n = nums.size();
    int  k = 15;

    int maxCount = 0;
    
    
    for(int i = 0 ;i < n ; i++){
        int num = nums[i];
        int count = 1;
        for(int j = i + 1 ;j < n ; j++){

            num +=nums[j];
            count++;
            if(num == k){
                maxCount = max(count , maxCount);
                continue;
            }
        }
    }
    // cout<<maxCount;
    if(maxCount > 0){
        return maxCount;

    }

    return 0;
};