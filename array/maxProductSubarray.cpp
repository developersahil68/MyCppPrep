#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

class Solution{
    public:
    int  maxProduct(vector<int> &nums){
        int n = nums.size();
        int prefix = 1, suffix = 1;
        int maxProd = INT_MIN;

        for(int i = 0 ; i < nums.size() ; i++) {
            if(suffix == 0) suffix = 1;
            if(prefix == 0) prefix = 1;
            prefix = prefix * nums[i];
            suffix = suffix * nums[n-i+1];

            maxProd = max(maxProd , max(suffix , prefix));
        }

     }
};

// int main()
// {
//     vector<int>  nums = {-1};
//          int n = nums.size();

//         // if(n==1) return nums[0];

//         int maxPro = INT_MIN;

//         for(int i = 0 ; i<n ;i++){
//         int pro = nums[i];
//             for(int j = i+ 1; j< n ; j++){
//                  pro = pro*nums[j];
//                  maxPro = max(pro , maxPro); 
//             }
//         }

//         int maxNum = INT_MIN;
//         for(int i = 0 ;i < n ; i++){
//             maxNum = max(nums[i] , maxNum);
//         }
//         int ans = max(maxNum , maxPro);
//         cout<<ans;
//     return 0;
// };