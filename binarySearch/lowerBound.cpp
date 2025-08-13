#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> nums = {1, 2, 4, 4, 5, 6, 8, 10};
    int x = 4;

    int n = nums.size();
    int low = 0;
    int high = n-1;
    int ans = n;
    
    while(low<high){
        int mid = (low+high)/2;
        // if(nums[mid] == x) {
        //     cout<<mid;
        //     return mid;
        // }
        if(x <= nums[mid] ){
            high = mid-1;
            ans = mid;
        }else if(x >= nums[mid]){
            low = mid+1;

        }
    }

     if (ans == nums.size()) {
        std::cout << "The lower bound for " << x << " was not found. Returning size " << ans << "." << std::endl;
    } else {
        std::cout << "The lower bound of " << x << " is at index: " << ans << std::endl;
        std::cout << "Value at this index is: " << nums[ans] << std::endl;
    }

    return 0;
}

