#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;

bool possible(vector<int> &bloomDay , int day , int m , int k){
    int cnt = 0; 
    int noOfB = 0;
    for(int i = 0 ; i < bloomDay.size() ; i++) {
        if(bloomDay[i] <= day){
            cnt++;
        }else{
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    noOfB+= (cnt / k);
    return noOfB >= m;
}

int main(){
    
     vector<int> bloomDay = {1,10,3,10,2};
     int  m = 3, k = 1;
 int  n = bloomDay.size();
     long long val = m * 1LL * k *1LL;
     if(val > n) return -1;
     int mini = INT_MAX , maxi = INT_MIN;
     for(int i = 0 ; i < n ; i++) {
        mini = min(mini ,bloomDay[i]);
        maxi = max(maxi ,bloomDay[i]);
     }
     int low = mini , high = maxi;
     while(low<=high){
        int mid = (low+high)/2;
        if(possible(bloomDay , mid , m , k )){
            high = mid-1;
        }else{
            low = mid+1;
        }
     }
  cout<<low;
    return 0;
}