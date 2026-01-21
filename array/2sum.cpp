#include<iostream>
#include<unordered_map>
 #include<vector>
using namespace std;

vector<int> twoSum(vector<int> &nums , int target){
   unordered_map<int , int> numMap;

   for(int i = 0 ; i<nums.size() ; i++) {
    int complement = target - nums[i];

    if(numMap.find(complement) != numMap.end()){
        return {numMap[complement] , i};
    }
    numMap[nums[i]] = i;
}
return {};
}

int main() {

   
return 0;
}