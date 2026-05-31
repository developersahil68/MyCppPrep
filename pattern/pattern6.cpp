#include<iostream>
using namespace std;

void print6(int n) {

    for(int i = n ;i >= 1 ; i--) {
        for(int j = 1 ; j <= i ; j++){
          cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main() {
     print6(5);
    return 0;
}