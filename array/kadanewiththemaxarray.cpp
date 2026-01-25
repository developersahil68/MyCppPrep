// Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.
// now also give the array that contains the largest sum 


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
     int tempstart = 0;

    for(int i = 0; i < nums.size() ; i++){
        sum += nums[i];
        if(sum > finalSum){
           finalSum = sum;
           start = tempstart;
           end = i;
        }
       
        if(sum <0){
            sum = 0;
            tempstart = i+1;
        }
    }


      cout << "Maximum subarray: ";
        for (int i = start; i <= end; i++) {
            cout << nums[i] << " ";
        }
  
    return finalSum;

};

