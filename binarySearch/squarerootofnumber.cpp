#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int nums = 28;

    


    int low = 1;
    int high = nums;
    int ans = 0;

    while(low<=high){
        int mid =  low + (high - low) / 2;
        long long square = (long long)mid * mid;
        
      if(square == nums) {
        ans = mid;
        break;
      }

      if(square > nums){

        high = mid-1;
      }else{
        ans = mid;
        low=mid+1;

      }
    }
  cout<<ans;
    return 0;
}