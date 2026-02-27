#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int merge(vector<int> &nums , int low , int high , int mid){
        int m = low ;
        int n = mid+1;
        vector<int> ans;

        int cnt = 0;
  
        while(m <= mid && n <= high){
              if(nums[m] >= nums[n]){
                cnt += (mid - m + 1);
                ans.push_back(nums[n]);
                n++;
              }else{
                ans.push_back(nums[m]);
                m++;
              }
        }

        while(m <= mid){
             ans.push_back(nums[m]);
                m++;
        }
        while(n <= high){
             ans.push_back(nums[n]);
                n++;
        }
          for(int i = low; i <= high; i++){
        nums[i] = ans[i - low];
    }
    return cnt;
    }
     int mergeSort(vector<int> &nums , int low , int high){
        int cnt = 0;
          if(low >= high) return cnt ;

          int mid = (low + high )/2;

       cnt +=   mergeSort(nums , low , mid);
        cnt +=  mergeSort(nums , mid+1 , high);
        cnt +=  merge(nums , low , high , mid);

        return cnt;
     }
};


// Given an integer array nums. Return the number of inversions in the array.
// Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
// It indicates how close an array is to being sorted.
// A sorted array has an inversion count of 0.
// An array sorted in descending order has maximum inversion.