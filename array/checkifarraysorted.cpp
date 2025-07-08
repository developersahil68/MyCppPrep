#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1,3,6,2,23};

    for(int i = 0 ; i < 4 ; i++) {
        if(arr[i] > arr[i+1]){
            cout<<"the array is not in aescending order";
            return false;
        }
    }
    cout<<"the array is in aescending order";
    return true;
}

