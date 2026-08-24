#include<vector>
#include<iostream>
#include<unordered_map> 
using namespace std;

class Solution{
    public:
    bool find(vector<int> &arr){
                 int n = arr.size();
        int totalSum = 0;

       
        for(int i = 0; i < n ; i++){
            totalSum += arr[i];
            
        }

        int prefixSum = 0;

        for(int i = 0 ; i < n ; i++) {
            
          
            prefixSum += arr[i];
            
            if(prefixSum*2 == totalSum) return true;
        }
    return false;
    }
};

int main() {
//    vector<int> nums = {1 , 2 , 3 , 4 , 5 , 5};
   vector<int> nums = {4, 3, 2, 1};
    Solution sol;
  bool res =  sol.find(nums);
  cout<<res;
  return 0;
}