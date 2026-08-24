#include<iostream>
#include<vector>
using namespace std;


int main() {
   vector<int> nums1 = {3, 4, 6, 7, 9, 9}, nums2 = {1, 5, 7, 8, 8};
   
   int n = nums1.size() ;
   
   int m = nums2.size();

   vector<int> ans = {};
   

   int i = 0;
   int j  = 0;

   while(i < n && j <m ){


    while(i < n-1 && nums1[i] == nums1[i+1]) i++;
    while(j < m-1 && nums2[j] == nums2[j+1]) j++;
    if(nums1[i] == nums2[j]){
        ans.push_back(nums1[i]);
        i++;
        j++;
    }else if(nums1[i] < nums2[j]){
        ans.push_back(nums1[i]);
        i++;
    }else if(nums1[i] > nums2[j]){
        ans.push_back(nums2[j]);
        j++;
    }
   }


           // Add remaining elements from nums1
        while (i < n) {
            while (i < n - 1 && nums1[i] == nums1[i + 1]) i++;
            ans.push_back(nums1[i]);
            i++;
        }
        
        // Add remaining elements from nums2
        while (j < m) {
            while (j < m - 1 && nums2[j] == nums2[j + 1]) j++;
            ans.push_back(nums2[j]);
            j++;
        }
        
        // return ans;

       for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
}

   return 0;
}