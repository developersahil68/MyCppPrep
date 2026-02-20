#include<iostream>
#include<vector>
using namespace std;

// i have solved this question by myself

class Solution {
public:

    void findCombinations(  vector<int>& nums ,  int k , int n , int sum ,vector<vector<int>> &ans , vector<int>& ds ,int idx){

        if(ds.size() == k){
            if(sum == n){
                ans.push_back(ds);
            }
            return;
        }

        if (idx > nums.size()) {
        return;
    }

    if (sum > n) return;

           sum += nums[idx];
            ds.push_back(nums[idx]);
            findCombinations(nums , k , n , sum , ans , ds , idx+1);
            sum -= nums[idx];
            ds.pop_back();
        
              findCombinations(nums , k , n , sum , ans , ds , idx+1);

    }
    vector<vector<int>> combinationSum(vector<int>& nums) {

        vector<vector<int>> ans ;
        vector<int> ds ;
        int k = 3;
        int n = 9;
        findCombinations(nums , k , n , 0 ,ans , ds , 0);
        return ans;
    }
};

 int main() {
    Solution s;
    vector<int> nums = {1 , 2 , 3, 4 , 5 , 6 , 7 , 8 , 9};
    
    int n = nums.size();
   vector<vector<int>> apt =  s.combinationSum(nums);


   for(auto subset : apt){
    cout << "{ ";
    for(auto num : subset){
        cout << num << " ";
    }
    cout << "} ";
}

    return 0;
 }