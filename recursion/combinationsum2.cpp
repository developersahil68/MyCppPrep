#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:

void solve(vector<int> &candidates , int target , vector<int> &curr , int idx , vector<vector<int>> &result ){
    if(target == 0){
        result.push_back(curr);
        return;
    }

    for(int i = idx ; i < candidates.size() ; i++){
        if(i > idx && candidates[i] == candidates[i-1]){
            continue;
        }

          if (candidates[i] > target) {
                break;
            }
            

        curr.push_back(candidates[i]);
        solve(candidates , target - candidates[i] , curr , i+1 , result);
        curr.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();

        vector<vector<int>> ans ;
        vector<int> curr ;
       sort(candidates.begin() , candidates.end());

       solve(candidates , target , curr , 0 , ans);
    

return ans;
    }
};