// Given an integer array nums, return a list of all the leaders in the array.

// A leader in an array is an element whose value is strictly greater than all elements to its right in the given array. The rightmost element is always a leader. The elements in the leader array must appear in the order they appear in the nums array.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums= {-3, 4, 5, 1, -4, -5};
    vector<int> ans;
    
    int n = nums.size();
    ans.push_back(nums[n-1]);

    for(int i = n-1; i >= 1 ; i--){
        if(nums[i] < nums[i-1]){
           ans.push_back(nums[i-1]);
        }
    }

    reverse(ans.begin() , ans.end());

    for(int i = 0 ; i < ans.size() ;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
};