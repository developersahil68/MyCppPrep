#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


class Solution {
 
   public:
    int subarraySumEqualToK(vector<int> &nums , int k ) {
      unordered_map<int , int > mpp;
      mpp[0] = 1;

      int cnt = 0;
      int preSum = 0;

      for(int i = 0 ; i < nums.size() ; i++) {
          preSum += nums[i];
          int remove = preSum - k;
          cnt += mpp[remove]; // this line is checking if it contains remove then add it in count and if it does not then create new with remove , 0
       mpp[preSum] += 1;
      }
 return cnt ;
    }
};


  