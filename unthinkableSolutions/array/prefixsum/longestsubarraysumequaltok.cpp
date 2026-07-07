#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
    public:

    int maxlen(vector<int> nums , int k ){
        int maxlen = 0;
        unordered_map<int , int> prefixmap;
        int currentSum = 0;
         
       prefixmap[0] = -1;
       
       for(int i = 0 ; i < nums.size() ; i++){
        currentSum += nums[i];

        if(prefixmap.find(currentSum - k) != prefixmap.end()){
            int len = i - prefixmap[currentSum - k];
            maxlen = max(len , maxlen);
        }

        // only add last occurence optimization technique

        if(prefixmap.find(currentSum) == prefixmap.end()){
            prefixmap[currentSum] = i;
        }
       }
       return maxlen;
    }
};