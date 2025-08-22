#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
#include<algorithm>
#include <numeric>
using namespace std;


int  countStudents(vector<int> &arr , int pages ){
    int students = 1;
    long long pagesCount = 0;
    for(int i = 0; i<arr.size() ; i++){
        if(pagesCount + arr[i] <= pages){
            pagesCount+=arr[i];
        }else{
            students++;
            pagesCount = arr[i];
        }
    }

return students;
}

int main(){
    vector<int> nums= {25, 46, 28, 49, 24};
    int m = 4;
    int n = nums.size();
    if(m > n ) return -1;
   
    int low = *max_element(nums.begin() , nums.end()); 
    int high = accumulate(nums.begin() , nums.end() ,0);
    while(low<=high){
        int mid= (low+high)/2;
        int students = countStudents(nums , mid);
        if(students > m){
            low = mid+1;
        }else{high = mid-1;}
   
    }
    cout<<low;
    return 0;
}