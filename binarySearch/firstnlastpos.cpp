#include<iostream>
#include<vector>
using namespace std;

int findLeftmost(vector<int> &nums , int target){
    int n = nums.size();

    int left = 0;
    int right = n-1;
    int index = -1;

    while(left<=right){
        int mid = left + (right - left) / 2;
        if(nums[mid] >= target){
            if(nums[mid] == target){
                index = mid;
            }
            right = mid-1;
        }else{
            left = mid+1;
        }
        
    }
    return index;
}
int findRightmost(vector<int> &nums , int target){
        int n = nums.size();

    int left = 0;
    int right = n-1;
    int index = -1;

    while(left<=right){
        int mid = left + (right - left) / 2;
        if(nums[mid] <= target){
            if(nums[mid] == target){
                index = mid;
            }
            left = mid+1;
        }else{
            right = mid-1;
        }
        
    }
    return index;
}

int main() {
    vector<int> nums = {5,7,7,8,8,10}; 
     int target = 8;
     int left_bound = findLeftmost(nums, target);
     int right_bound = findRightmost(nums, target);
     vector<int> ans = {left_bound , right_bound};
   cout << "[" << left_bound << ", " << right_bound << "]" << endl;

    return 0;
}