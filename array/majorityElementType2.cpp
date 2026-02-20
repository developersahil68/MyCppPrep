#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<unordered_map>
using namespace std;

// boye-moore voting algorithm based question
int main()
{
   vector<int> nums = {3 , 2 , 3};
    
   int cnt1 = 0 , cnt2 = 0;
   int ele1 = INT_MIN;
   int ele2 = INT_MIN;
    for(int i = 0 ; i <nums.size() ; i++){
        if(cnt1 ==0 && ele2 != nums[i]){
            cnt1 = 1;
            ele1 = nums[i];
        }else if(cnt2 ==0 && ele1 != nums[i]){
            cnt2 = 1;
            ele2 = nums[i];
        }else if(nums[i] == ele1) cnt1++;
        else if(nums[i] == ele2) cnt2++;
        else{
            cnt1-- , cnt2--;
        }
    }

    // core logic finished

    vector<int> ls;
    cnt1 = 0, cnt2 = 0;

    for(int i = 0 ; i <nums.size() ; i++){
        if(ele1 == nums[i]) cnt1++;
        if(ele2 == nums[i]) cnt2++;
    }
    int mini = (int)(nums.size()/3 + 1);
    if(cnt1 >= mini) ls.push_back(ele1);
    if(cnt2 >= mini) ls.push_back(ele2);

  
     
    return 0;
}




//    int n = nums.size();
//    unordered_map<int ,int> freqMap;
//     vector<int> res;

//     for(int num : nums){
//         freqMap[num]++;
//     }

//     for(auto const &pair : freqMap){
//         if(pair.second > n/3){
//             res.push_back(pair.first);
//         }
//     }

//     for(auto r : res){
//         cout<<r<<" ";
//     }
    