#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums = {4 , 5 , 1 , 3 , 8 , 9 ,5};
    int target = 3;

    for(int i = 0 ; i < nums.size(); i++) {
        if(nums[i] == target) {
            cout<<i;
            return i;
        }
    }
    
    return 0;
};