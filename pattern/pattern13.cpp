#include<iostream>
using namespace std;

int main() {

    int n = 5;
    int count = 1;

    for(int i = 1 ; i <= n; i++) {
        int ival = count +i;
        for(int j = count ; j < ival ; j++){
            cout<<count << " ";
            count++;
        }
     
     cout<<  "\n";
    }

}