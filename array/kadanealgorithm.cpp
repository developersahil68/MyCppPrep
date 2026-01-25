// Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.


#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
  int sum = 0;
    int finalSum = nums[0];

     int start = 0;
     int end = 0;

    for(int i = 0; i < nums.size() ; i++){
        int start = nums[i];
        sum += nums[i];
        finalSum = max(sum , finalSum);
        if(sum <0){
            int end = nums[i];
            sum = 0;
        }
    }

  
    return finalSum;

};



// kadane algorithm

//   int sum = 0;
//     int finalSum = nums[0];

//     for(int i = 0; i < nums.size() ; i++){
//         sum += nums[i];
//         finalSum = max(sum , finalSum);
//         if(sum <0){
//             sum = 0;
//         }
//     }

  
//     return finalSum;




// int main()
// {
//     vector<int> nums = {2, 3, 5, -2, 7, -4};
//     // vector<int> nums = {-2, -3, -7, -2, -10, -4};
//     int sum = 0;
//     int finalSum = INT_MIN;

//     for(int j = 0; j < nums.size()  ; j ++){

//         for(int i = 0; i<nums.size()-j ; i++){
//                 sum += nums[i];
//         }
//         finalSum = max(sum , finalSum);
//         sum = 0;
//         for(int k = nums.size() - 1; k>=j ; k--){
//                 sum += nums[k];
//         }
//         finalSum = max(sum , finalSum);
//         sum = 0;

//     }
//     cout<<finalSum;
//     return finalSum;
// };