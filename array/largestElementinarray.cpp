#include<iostream>
using namespace std;

int main() {
    int arr[6] = {4 , 4, 2 , 14 , 45 , -5};
    int largestElement = arr[0];

    for(int i = 0 ; i < 6; i++) {
        if(arr[i] > largestElement){
            largestElement = arr[i];
        }
    }

    cout<<"Largest Element in an array is "<<largestElement;

    return 0;
}