#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
#include<algorithm>
#include <numeric>
using namespace std;

// A conveyor belt has packages that must be shipped from one port to another within days days.

// The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

// Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.

 



int findDays(vector<int> &weights , int cap){
 int days = 1 , load = 0;
 int n = weights.size();
 for(int i = 0 ; i < n ; i++) {
   if(weights[i] +load >  cap){
    days += 1;
    load = weights[i];
   }else{
    load+=weights[i];
   }
 }
return days;
}

int main(){
    vector<int> weights= {3,2,2,4,1,4};
    int days = 3;
    int low =*max_element(weights.begin() , weights.end()); 
    int high = accumulate(weights.begin() , weights.end() , 0);
    while(low<=high){
        int mid= (low+high)/2;
        int numberOfDays = findDays(weights , mid);
        if(numberOfDays <= days){
            high = mid-1;
        }else{
            low=mid+1;
        }
    }
    cout<<low;
    return 0;
}