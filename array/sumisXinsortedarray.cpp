#include<iostream>
using namespace std;

int main() {
    int n =  5;
    int x = 8;
    int arr[n] = {1 , 2, 5, 8,9};

    int i = 0;
    int j = n-1;

    while(i<j){
      if(arr[i] + arr[j] > x){
            j--;
      }else if(arr[i] + arr[j] < x){
            i++;
      }else{
        cout<<true;
        return true;
      }
    }
    cout<<false;
    return false;
}