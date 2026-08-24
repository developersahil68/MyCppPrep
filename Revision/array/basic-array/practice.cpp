#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = { 2 , 4 , 1 , 3 , 8 , 5 , 18, 6 , 7 , 14 };
    int n = arr.size();
    int largest = INT_MIN;
    int secondlargest = INT_MIN;
    for(int i = 0 ;i < n ; i++){
       if(largest < arr[i]){
         secondlargest = largest;
        largest = arr[i];
        // continue;
     
       }

       if(arr[i] < largest && arr[i] > secondlargest){
        secondlargest = arr[i];
       }
       
    }

    cout<<secondlargest;
    
    return 0;
}