#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

// Given an array of integers nums and an integer k, return the total number of subarrays whose XOR equals to k.

int main()
{
  vector<int> nums = {4, 2, 2, 6, 4};
           int n = nums.size();
        int count = 0;
        for(int i = 0 ;i < n ; i++){
           int xor =0;
            for(int j = i+1 ; j < n ;j++){
                xor = xor^nums[j];
                
                 if(xor == target){
                    count++;
                 }
            }
        }
        return count;
    
    return 0;
};