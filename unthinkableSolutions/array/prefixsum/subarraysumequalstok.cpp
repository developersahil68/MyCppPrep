#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
    public:
    int findsubarraysumequalstok(vector<int> nums , int k){
       int n = nums.size();
        vector<int> prefixsum(n , 0);
        prefixsum[0] = nums[0];
        for( int i = 1 ; i < n ; i++){
             prefixsum[i] = prefixsum[i-1] + nums[i];
        }

        unordered_map<int , int> map;
          int cnt = 0;
        for( int j = 0 ; j < n ; j++) {
            if(prefixsum[j] == k ){
                cnt++;
            }
            int val = prefixsum[j] - k ;

            if(map.find(val) != map.end()){
                cnt += map[val];
            }
            map[prefixsum[j]]++;

        }
        return cnt;
    }
};