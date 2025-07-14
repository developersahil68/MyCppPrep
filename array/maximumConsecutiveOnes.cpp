#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 1, 0, 0, 1, 1, 1, 0};

    int firstNum = 0;
    int secondNum = 0;

    for(int i = 0 ; i < nums.size() ; i++) {
        if(nums[i] == 1){
            firstNum++;
        }
    }

    cout<<firstNum;
    return firstNum;
    return 0;
};