#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>  nums = {2, 4, 5, -1, -3, -4};
     int n = nums.size();
    // odd places = negative
    // even places = positive

    for(int i = 0 ;i < n ; i++){
        if(i % 2 == 0 ){
         if(nums[i] > 0 && nums[i+1] > 0){
           for(int j = i+1; j < n; j++){
            if(nums[j] < 0){
                for(int k = j ; k >= i+1; k--){

                    swap(nums[k] , nums[k-1]);
                }
            }
           }
           }
        }else if(i % 2 != 0){
               if(nums[i] < 0 && nums[i+1] < 0){
           for(int j = i+1; j < n; j++){
            if(nums[j] > 0){
                for(int k = j ; k >= i+1; k--){

                    swap(nums[k] , nums[k-1]);
                }
            }
           }
           }
        }
    }

    for(int i = 0; i<n; i++){
        cout<<nums[i]<<' ';
    }

    return 0;
};