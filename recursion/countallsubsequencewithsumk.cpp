#include<iostream>
#include<vector>
using namespace std;

int subsequences(vector<int> &nums ,int s , int k , int idx , int n){
 if(idx == n){
    if(s == k){

        return 1;
    }else return 0;
 }

 s += nums[idx];

 int l = subsequences(nums , s , k , idx+1 , n);

s -= nums[idx];
 int r = subsequences(nums , s , k , idx+1 , n);

 return l + r;
}

int main() {
    vector<int> nums = {4, 9, 2, 5, 1};
    int n = nums.size();
    int  k = 10;
    int res = subsequences(nums,0 , k ,0 , n);
    cout<<res;
    return 0;
}