#include<iostream>
#include<vector>

using namespace std;

void mergeSortedArray(vector<int> &v1 , int m , vector<int> &v2, int n){

    int p1 = m-1;
    int p2 = n-1;
    int p = m+n-1;


    while(p1 >= 0 && p2 >=0){
        if(v1[p1] > v2[p2]){
            v1[p] = v1[p1];
            p1--;
        }else{
            v1[p] = v2[p2];
            p2--;
        }
        p--;
    }

    while(p2 >= 0){
      v1[p] = v2[p2];
            p2--;
            p--;
    }
  

    for (int i = 0 ; i < (m+n) ; i++){
        cout<<v1[i]<<" ";
    }

 

}

int main() {
    int m = 4 ;
    int n = 4;


    vector<int> v1 = {2, 5, 7, 11, 0, 0, 0, 0};
    vector<int> v2 = {3, 4, 9, 10};
    mergeSortedArray(v1  , m , v2 , n);
    return 0;
}