#include<iostream>
#include<vector>
using namespace std;

// removes duplicates from sorted array

int main() {
    vector<int> nums = {1 , 4 , 5 ,5 , 5, 7 , 9 , 9};

    int j = 0;

    for(int i = 1; i< nums.size(); i++){
        if(nums[i] != nums[j]){
            j++;
            nums[j] = nums[i];
        }
    }

          for(int k = 0 ; k < j+1 ; k++) {
        cout<<nums[k]<<" ";
          }
}

