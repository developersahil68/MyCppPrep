#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    int n = intervals.size();

      if (intervals.empty()) {
     // return {}; // Or print nothing
        return 0;
    }

    sort(intervals.begin() , intervals.end());

    vector<vector<int>> mergedIntervals;
    mergedIntervals.push_back(intervals[0]);
    vector<vector<int>> ans;
    for(int i = 1 ; i<n ; i++){
     vector<int>& lastInterval = mergedIntervals.back();

     vector<int>& curentInterval = intervals[i];

     if(curentInterval[0] <= lastInterval[1]){
        lastInterval[1] = max(lastInterval[1] , curentInterval[1]);
     }else{
        mergedIntervals.push_back(curentInterval);
     }
    }


    
    return 0;
};
// brute solution
// int main()
// {
//     vector<vector<int>> nums = {{1,3},{2,6},{8,10},{15,18}};
//     int n = nums.size();

//     sort(nums.begin() , nums.end());
//     vector<vector<int>> ans;
//     for(int i = 0 ; i<n ; i++){
//        int start = nums[i][0];
//        int end = nums[i][1];

//        if(!ans.empty() && end <= ans.back()[i]){
//         continue;
//        }
//        for(int j = i+1 ; j< n ; j++){
//         if(nums[j][0] <= end){
//             end = max(end , nums[j][1]);
//         }else{
//             break;
//         }
//        }
//        ans.push_back({start, end});

//     }


    
//     return 0;
// };