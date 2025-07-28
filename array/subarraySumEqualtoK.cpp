#include<iostream>
#include<vector>
using namespace std;

int main()
{
//   vector<int> nums = {-1,-1,1};
  vector<int> nums = {1,-1,0};
//   vector<int> nums = {1,1,1};
//   vector<int> nums = {1,2,3};
   int k = 0;
     int n = nums.size();
     int count = 0;
     
     
     for(int i = 0 ; i < n ; i++){
          int sum = 0;
        
         for(int j = i ; j < n ; j++){
            sum+=nums[j];
            if(sum == k ){
                count++;
            }
         }
        }
     
     cout<<count;
     return 0;
    };
    
    // for(int i = 0 ; i < n ; i++){
    //    sum = sum + nums[i];
    //    if(sum == k ){
    //        count++;
    //        sum = 0;
    //    }
    //    if(nums[i] == nums[i+1]){
    //        i++;
    //    }
    // }


    // for(int i = 0 ; i < n ; i++){
    //     for(int j = i + 1 ; j < n; j++) {
    //         if(nums[i] + nums[j] == k  ){
    //             count++;
    //             break;
    //         }
    //      }
    //     }
    //     for(int i = 0 ; i < n ; i++) {
    //         if(nums[i] == k){
    //             count++;
    //         }
    //     }