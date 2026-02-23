#include<iostream>
#include<vector>
#include<climits>
#include<map>
#include<algorithm>
using namespace std;

// Given an array of integers nums and an integer k, return the total number of subarrays whose XOR equals to k.

int main()
{
  vector<int> nums = {4, 2, 2, 6, 4};
           int k = 6;
           int n = nums.size();
           int xr = 0;   
           map<int , int> mpp;
           mpp[xr]++;

        int count = 0;
        for(int i = 0 ;i < n ; i++){
           xr = xr ^ nums[i];

           int x = xr ^ k;
           count += mpp[x];
           mpp[xr]++;
         
        }
        cout<<count;
    
    return 0;
};