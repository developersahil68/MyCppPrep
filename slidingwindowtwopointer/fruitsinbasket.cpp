#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int k = 2;

         int maxLen = 0;
        map<int , int> mpp;
        int left = 0;
        int right =0;

        while(right < fruits.size()){
            mpp[fruits[right]]++;

            if(mpp.size() > k){
                while(mpp.size() > k ){
                    mpp[fruits[left]]--;
                    if(mpp[fruits[left]] == 0){
                        mpp.erase(fruits[left]);
                    }
                    left++;
                }
            }
            if(mpp.size() <= k ){

            int len = right -left +1;
            maxLen = max(maxLen ,  len);
            }
            right++;
        }
        return maxLen;
    }
};