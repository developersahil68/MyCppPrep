#include <iostream>
#include<vector>

using namespace std;

int main() {

    vector<int> nums = {1, 2, 4, 4, 5, 6, 8, 10};
    int x = 4;

    int n = nums.size();
    int low = 0;
    int high = n-1;
    int ans = n;

    while(low <= high){
        int mid = (low+high)/2;

        if(nums[mid] > x){
            ans = mid;
            high = mid -1;
        }else{
            low = mid+1;
        }
    }

    cout<<ans;

}