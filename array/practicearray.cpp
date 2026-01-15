#include <iostream>
#include<vector>
using namespace std;

int main() {
   vector<int> nums = {2 , 5 , 8 , 8 , 9 , 10};
   int j = 0;
   for(int i = 1 ;i < nums.size() ; i++){
      if(nums[j] != nums[i]){
        j++;
        nums[j] = nums[i];
      }
   }

    return 0;
}