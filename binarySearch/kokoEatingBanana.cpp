#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
using namespace std;

int findMax (vector<int> &piles){
    int maxi = INT_MIN;
    int n = piles.size();
    for(int i = 0 ; i < n ; i++) {
        maxi=max(maxi , piles[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int> &piles , int hourly){
 int totalH = 0;
 int n = piles.size();
 for(int i = 0 ; i < n ; i++) {
    totalH += ceil((double)piles[i] / (double)hourly);
 }
return totalH;
}

int main(){
    vector<int> piles= {30,11,23,4,20};
    int h = 5;
    int low =1, high = findMax(piles);
    while(low<=high){
        int mid= (low+high)/2;
        int totalH = calculateTotalHours(piles , mid);
        if(totalH <= h){
            high = mid-1;
        }else{
            low=mid+1;
        }
    }
    cout<<low;
    return 0;
}