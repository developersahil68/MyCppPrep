#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.


// brute force solution 

// int main()
// {
//     // vector<int> nums = {2 , 5 , 3 , 9 , 7 , 4};
//     // vector<int> nums =  {10, 5, 2, 7, 1, 9};
//     vector<int> nums =  {-3, 2, 1};
//     int n = nums.size();
//     int  k = 15;

//     int maxCount = 0;
    
    
//     for(int i = 0 ;i < n ; i++){
//         int num = nums[i];
//         int count = 1;
//         for(int j = i + 1 ;j < n ; j++){

//             num +=nums[j];
//             count++;
//             if(num == k){
//                 maxCount = max(count , maxCount);
//                 continue;
//             }
//         }
//     }
//     // cout<<maxCount;
//     if(maxCount > 0){
//         return maxCount;

//     }

//     return 0;
// };


// better solution using hashing

// this solution will work if the array doesn't contain 0 or negetives but if it does then it won't work , it is an better solution if the array only conatins positives and 0

// class Solution{
// public:
//     int longestSubarray(vector<int> &nums, int k){
//        unordered_map<int , int> preSum;
//         int sum = 0;
//         int maxLen = 0;
//         for(int i = 0 ; i <nums.size() ; i++) {
//             sum += nums[i];
//             if(sum == k){
//                 maxLen = 1;
//             }
//             int rem = sum - k ;
//             if(preSum.find(rem) != preSum.end()){
//                 int len = i - preSum[rem];
//                 maxLen = max(maxLen , len);
//             }
//             preSum[sum] = i;
//         }
//         return maxLen;
//     }
// };


// this solution is going to work even if the array contains 0 , negatives or positives , so it is an optimal solution if the array conatins pos , neg or 0
// class Solution{
// public:
//     int longestSubarray(vector<int> &nums, int k){
//        unordered_map<int , int> preSum;
//         int sum = 0;
//         int maxLen = 0;
//         for(int i = 0 ; i <nums.size() ; i++) {
//             sum += nums[i];
//             if(sum == k){
//                 maxLen = 1;
//             }
//             int rem = sum - k ;
//             if(preSum.find(rem) != preSum.end()){
//                 int len = i - preSum[rem];
//                 maxLen = max(maxLen , len);
//             }
//             if(preSum.find(sum) == preSum.end()){

//                 preSum[sum] = i;
        
//         }
//     }
//         return maxLen;
//     }
// };

// most optimal solution for the array which contains positive and 0,


class Solution {
    public:
     int longestSubarray(vector<int> & nums , int k ) {
     int left = 0 , right = 0;

     int sum = nums[0];
     int maxLen = 0;

     int n = nums.size();
     while(right < n){
        while(left <= right && sum > k) {
            sum -= nums[left];
            left++;
        }
        if(sum == k) {
            maxLen = max(maxLen , right - left + 1);
        }
        right++;
        if(right < n) sum += nums[right];
     }
     return maxLen;

     }
      
};