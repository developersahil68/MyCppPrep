#include<iostream>
#include<vector>

using namespace std;

void mergeSortedArray(vector<int> v1 , int m , vector<int> v2, int n){

    vector<int> res;

 
    int i = 0;
    int j = 0;
    // int i = 0;

    while(i<m && j < n){
        if(v1[i] < v2[j]){
            res.push_back(v1[i]);
            i++;
        }else{
            res.push_back(v2[j]);
            j++;
        }
    }

    while(i<m){
         res.push_back(v1[i]);
            i++;
    }
    while(j<n){
           res.push_back(v2[j]);
            j++;
    }

    for (int i = 0 ; i < (m+n) ; i++){
        cout<<res[i]<<" ";
    }

 
  

    // int ptr1 = v1[0];
    // int ptr2 = v2[0];
    // int ptr3 = res[-1];
    
    // for(int i =0 ; i < (m+n) ; i++){
    //    if(v1[i] < v2[i]){
    //     res.push_back(v1[i]);
    //     ptr1++;
    //     ptr3++;
    // }else{
    //     res.push_back(v2[i]);
    //     ptr2++;
    //     ptr3++;
    //    }
    // }

    // for(int i = 0 ; i < (m+n) ; i++){
    //     for(int  j = 0; j < (m+n) ; j++) {
    //     int ptr1 = v1[i];
    //     int ptr2 = v2[j];
    //     if(v1[i] < v2[j]){
    //     res.push_back(v1[i]);
    //     ptr1++;
    //     // ptr3++;
    //     i++;
    // }else{
    //     res.push_back(v2[i]);
    //     ptr2++;
    //     // ptr3++;
    //     j++;
    //    }
    //     }
    // }

    // for(int j = 0 ; j< (m+n) ; j++) {
    //     cout<<res[j];
    // }


}

int main() {
    int m ;
    int n;
    cout<<"Enter the size of first vector"<<"\n";
    cin>>m;
    cout<<"Enter the size of second vector"<<"\n";
    cin>>n;

    vector<int> v1(m);
    vector<int> v2(n);

    v1 = {2 , 5 , 7 , 11};
    v2 = {3 , 4 , 9 , 10};
    mergeSortedArray(v1  , m , v2 , n);
    return 0;
}