// Given an array of nums of n integers. Every integer in the array appears 
// twice except one integer. Find the number that appeared once in the array.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 2, 4, 3, 1, 3 , 4 ,5};

    if(nums.size() == 1){
        return nums[0];
    }

    sort(nums.begin() , nums.end());

    // now our vector becames 1 , 1 ,2 , 2 , 3, 4 , 4

    int i = 0;
    int j = 1;
    while(i < nums.size()){
        if(nums[i] == nums[j]){
            i++; i++;
            j++; j++;
        }else if(nums[i] != nums[j]){
            cout<<nums[i];
            return nums[i];
        }
    }

    return 0;
};
