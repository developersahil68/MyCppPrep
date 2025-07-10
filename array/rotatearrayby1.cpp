#include<iostream>
#include<vector>
using namespace std;

// Given an integer array nums, rotate the array to the left by one.

// Input: nums = [-1, 0, 3, 6]

// Output: [0, 3, 6, -1]

int main() {
    vector<int> v = {3 , 6 , -1};
    // int arr[]  = {0, 3 , 6 , -1};

    int firstele = v[0];
    v.erase(v.begin() + 0);
    v.push_back(firstele);

    for(int i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;


}