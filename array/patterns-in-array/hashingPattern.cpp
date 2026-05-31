#include<iostream>
#include<unordered_map>
using namespace std;

int main() {

    int arr[] = {1 , 2 , 4 , 1 , 5 ,  6 ,1 , 2 , 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    unordered_map<int , int> mpp;
    
    for(int i =0;i<size ; i++){
       mpp[arr[i]]++;
    }

    for(auto it : mpp){
        cout<<it.first <<" " <<it.second;
        cout<<endl;
    }

    return 0;
}