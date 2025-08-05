#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums = {3, 5, 4, 1, 1};
    int n = nums.size();

    long long SN= (n * (n+1)) / 2;  
    long long S2N= (n * (n+1) *(2*n+1)) / 6;
    
    long long S =0 , S2 = 0;

    for(int i = 0 ; i < n ; i++){
        S += nums[i];
        S2 += (long long)nums[i] * (long long )nums[i];  
    }

    long long val1 = S -SN; // x-y
    long long val2 = S2 -S2N; 

    val2 = val2 /val1; // x+y
    long long x = (val1 + val2) / 2;
    long long y = x-val1;

    vector<int> ans = {(int)x , (int)y};
    
    return 0;
};