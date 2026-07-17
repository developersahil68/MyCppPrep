#include<iostream>
using namespace std;

int main() {

    int n = 9;

    for(int i = 1 ; i <= n; i++) {
     // printing number
     for(int j = 1 ; j <= i ; j++){
         cout<<j;
     }

     // printing spaces
     for(int j = 1 ; j <= 2*n-2*i ; j++){
      cout<<" ";
     }

     // printing number
     for(int j = i ; j >= 1 ; j-- ){
        cout<<j ;
     }

     cout<<  "\n";
    }

}