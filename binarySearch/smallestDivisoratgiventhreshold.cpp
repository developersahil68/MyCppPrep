#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
using namespace std;

// Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, divide all the array by it, and sum the division's result. Find the smallest divisor such that the result mentioned above is less than or equal to threshold.

// Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: 7/3 = 3 and 10/2 = 5).

// i have done it by myself in one go

int findMax (vector<int> &nums){
    int maxi = INT_MIN;
    int n = nums.size();
    for(int i = 0 ; i < n ; i++) {
        maxi=max(maxi , nums[i]);
    }
    return maxi;
}

int calculateTotalThres(vector<int> &nums , int divisor){
 int totalOnDividing = 0;
 int n = nums.size();
 for(int i = 0 ; i < n ; i++) {
    totalOnDividing += ceil((double)nums[i] / (double)divisor);
 }
return totalOnDividing;
}

int main(){
    vector<int> nums= {44,22,33,11,1};
    int threshold = 5;
    int low =1, high = findMax(nums);
    while(low<=high){
        int mid= (low+high)/2;
        int totalOnDividing = calculateTotalThres(nums , mid);
        if(totalOnDividing <= threshold){
            high = mid-1;
        }else{
            low=mid+1;
        }
    }
    cout<<low;
    return 0;
}