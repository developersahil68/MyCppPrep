#include<iostream>
using namespace std;

int main() {

    int n = 5;

    for(int i = 1 ; i <= n; i++) {
     // printing number
     for(int j = 1 ; j <= i ; j++){
         cout<<"*";
     }

     // printing spaces
     for(int j = 1 ; j <= 2*n-2*i ; j++){
      cout<<" ";
     }

     // printing number
     for(int j = i ; j >= 1 ; j-- ){
        cout<<"*";
     }

     cout<<  "\n";
    }
    
    for(int i = 1 ; i < n; i++) {
     // printing number
     for(int j = 1 ; j <= n-i ; j++){
         cout<<"*";
     }

     // printing spaces
     for(int j = 1 ; j <= 2*i ; j++){
      cout<<" ";
     }

     // printing number
      for(int j = 1 ; j <= n-i ; j++){
         cout<<"*";
     }

     cout<<  "\n";
    }

}