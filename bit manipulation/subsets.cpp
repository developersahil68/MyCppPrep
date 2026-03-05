#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        long long subsets = 1 << n;
        vector<vector<int>> ans ;

        for(int num = 0 ; num < subsets ; num++){
            vector<int> ansTemp;
            for(int i = 0 ; i < n  ; i++){
                if(num & (1 << i)){
                   ansTemp.push_back(nums[i]);
                }
            }
            ans.push_back(ansTemp);
        }
        return ans;
    }
};