#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
#include<algorithm>
#include <numeric>
using namespace std;


bool canWePlace(vector<int> &stalls , int dist , int cows){

    int cntCows = 1 , last = stalls[0];
    for(int i = 1; i <stalls.size(); i++){
        if(stalls[i] - last >= dist){
            cntCows++;
            last = stalls[i];
        }
        if(cntCows >= cows) return true;
    }
    return false;

}

int main(){
    vector<int> nums= {0, 3, 4, 7, 10, 9};
    int k = 4;
    sort(nums.begin() , nums.end());
    int n = nums.size();
    int low = 1, high = nums[n-1] - nums[0];
    while(low<=high){
        int mid= (low+high)/2;
       if(canWePlace(nums , mid , k) == true){
        low = mid+1;
       }else{
        high = mid -1;
       }
    }
    cout<<high;
    return 0;
}