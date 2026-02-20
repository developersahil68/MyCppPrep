#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;


// writing this to get our confusion solved 
// 1.  for finding normal subsets/combination means finding all subsets and the given array is unique then we take all the subsets that are build at the end of the node but in case of duplicates array we should n't collect leaf node elements but instead we should collect them at each step or if given target then according to the target


class Solution {
public:


void solve(vector<int> &candidates , vector<int> &curr , int idx , vector<vector<int>> &result ){
   
        result.push_back(curr);
 

    for(int i = idx ; i < candidates.size() ; i++){
        if(i > idx && candidates[i] == candidates[i-1]){
            continue;
        }

        curr.push_back(candidates[i]);
        solve(candidates , curr , i+1 , result);
        curr.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      int n = nums.size();
      vector<vector<int>> ans ;
      vector<int> curr ;
       sort(nums.begin() , nums.end());

       solve(nums , curr , 0 , ans);
    
       return ans;
    }
};