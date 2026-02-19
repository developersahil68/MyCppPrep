#include<iostream>
#include<vector>

using namespace std;

bool existance(vector<int> &nums , int s , int k , int idx , int n){
    if(idx == n){
        if(s == k){
            return true;
        }else return  false;
    }

    s += nums[idx];
    bool l = existance(nums , s , k , idx+1 , n);

    s -= nums[idx];
    bool r = existance(nums , s , k , idx+1 , n);
    
    return l || r;

}

int main() {
       vector<int> nums = {4, 9, 2, 5, 1};
    int n = nums.size();
    int  k = 10;
    int res = existance(nums,0 , k ,0 , n);
    cout<<res;
    return 0;
}