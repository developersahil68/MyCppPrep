#include<iostream>
#include<vector>

using namespace std;

void unionSortedArray(vector<int> &v1 , vector<int> &v2){

    vector<int> res;

    int m = v1.size();
    int n = v2.size();
 
    int i = 0;
    int j = 0;

    while(i<m && j < n){

        if (i > 0 && v1[i] == v1[i-1]) {
            i++;
            continue;
        }

        if (j > 0 && v2[j] == v2[j-1]) {
            j++;
            continue;
        }

        if(v1[i] < v2[j]){
            res.push_back(v1[i]);
            i++;
        }else if(v1[i] == v2[j]){
            res.push_back(v1[i]);
            i++;
            j++;
        }
        else{
            res.push_back(v2[j]);
            j++;
        }
    }

    while(i<m){
        if(i > 0 && v1[i] != v1[i-1]){
            res.push_back(v1[i]);
            i++;
        }else{

            i++;
        }
    }
    while(j<n){
             if(j > 0 && v2[j] != v2[j+1]){
           res.push_back(v2[j]);
            j++;
        }else{

            j++;
        }
           
    }

    for (int i = 0 ; i < res.size() ; i++){
        cout<<res[i]<<" ";
    }

 

}

int main() {
  vector<int> v1 = {2, 5, 7, 7 ,  9};
    vector<int> v2 = {3, 4, 9, 10, 10, 10};
    
    unionSortedArray(v1, v2);
    return 0;
    return 0;
}