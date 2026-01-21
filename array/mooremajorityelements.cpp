#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> nums = {2 , 3 , 3 , 3 , 5 };
    int freq = 0 ;
    int ourEle = nums[0];
    for(int i = 1 ; i < nums.size() - 1 ; i++) {
        if (freq==0){
         ourEle = nums[i];
         freq= 1;
        }
       else if(ourEle == nums[i] ){
        freq++;
       }else {
        freq--;
       }

    }
  cout<<ourEle;
    return 0;
}