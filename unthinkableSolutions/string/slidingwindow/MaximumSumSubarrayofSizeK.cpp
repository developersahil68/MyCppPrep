#include<vector>
using namespace std;

// bda simple logic hai sliding window use kiya hai like ki pehle k elements ka sum kar liya phir loop lga ke ek ghatatagya aur sath ke sath ek plus krta gya aur tda answer mil gya

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double windowSum = 0;

        for(int i = 0 ; i < k ; i++) {
             windowSum += nums[i];
        }

        double maxSum = windowSum;

        for(int i = k ; i < nums.size() ; i++) {
            windowSum = windowSum - nums[i -  k ] + nums[i];
            maxSum = max(windowSum , maxSum);
        }
        
        return maxSum;
    }
};