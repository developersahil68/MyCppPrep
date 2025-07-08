#include<iostream>
#include<vector>
using namespace std;



int main() {
    vector<int> v = {1 , 4 , 5 ,5 , 5, 7 , 9 , 9};

    for(int i = 0 ; i < v.size()-1;) {
        if(v[i] == v[i+1]){
         
          v.erase(v.begin()+i);
        }else{
            i++;
        }
    }
    for(int j = 0 ; j < v.size() ; j++) {
        cout<<v[j]<<" ";
    }
    return 0;
}
