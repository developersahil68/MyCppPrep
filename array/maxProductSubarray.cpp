#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>  nums = {-1};
         int n = nums.size();

        // if(n==1) return nums[0];

        int maxPro = INT_MIN;

        for(int i = 0 ; i<n ;i++){
        int pro = nums[i];
            for(int j = i+ 1; j< n ; j++){
                 pro = pro*nums[j];
                 maxPro = max(pro , maxPro); 
            }
        }

        int maxNum = INT_MIN;
        for(int i = 0 ;i < n ; i++){
            maxNum = max(nums[i] , maxNum);
        }
        int ans = max(maxNum , maxPro);
        cout<<ans;
    return 0;
};