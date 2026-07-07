#include<iostream>
#include<vector>
#include<numeric>
using namespace std;


int kadanesmin(vector<int> arr){
    int n = arr.size();
    int sum = 0;
    int totalsum = arr[0];

    for(int i = 0 ; i <  n ; i++  ){
        sum += arr[i];
        totalsum = min(sum , totalsum);

        if(sum > 0){
            sum = 0;
        }
    }
    return totalsum;
}

int kadanesmax(vector<int> arr){
    int n = arr.size();
    int sum = 0;
    int totalsum = arr[0];

    for(int i = 0 ; i <  n ; i++  ){
        sum += arr[i];
        totalsum = max(sum , totalsum);

        if(sum < 0){
            sum = 0;
        }
    }
    return totalsum;
}

int main() {
     vector<int> arr = {1 , 5 , 8 , -5 , -4 , 6 , 7 , 8 , -1};

    //1
     
    int SUM = accumulate(begin(arr) , end(arr) , 0);
    
    //2
    int maxSum = kadanesmax(arr);

    //3 
    int minsum = kadanesmin(arr);

    //4
    int circularsum = SUM - minsum;

    if(maxSum > 0){
        cout<<max(maxSum , circularsum);
    }

    cout<<maxSum;
    
    return 0;
}