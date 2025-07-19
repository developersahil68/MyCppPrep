#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 0, 2, 1, 0};

    for(int i = 0 ;i < nums.size() - 1; i++){
        for(int j = 0 ; j < nums.size() - 1 -i; j++){

            if(nums[j] > nums[j+1]){
              swap(nums[j] ,  nums[j+1]);
            }
        }
    }

    for(int k = 0 ; k < nums.size() ; k++) {
        cout<<nums[k];
    }

    return 0;
};