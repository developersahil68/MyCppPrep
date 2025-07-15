#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main()
{
    vector<int> nums = {1 , 1 ,0 , 1 , 1 ,1, 1,  0, 1 , 1, 1, 1, 1,};
    int count = 0;
    int maxStreak = 0;

    for(int i = 0 ; i < nums.size(); i++ ){
        if(nums[i] == 1){
            count++;
            maxStreak = max(count , maxStreak);
        }else{
            count = 0;
        }
    }
    cout<<maxStreak;
    return 0;
};


