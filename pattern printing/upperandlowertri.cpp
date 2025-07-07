#include<iostream>
using namespace std;


void printPattern(int n ){
    for(int i = 0; i < n; i++){
        int spaces = n - i  - 1;
        int ch = 2*i + 1;
        for(int j = 0; j < spaces ; j++){
            cout<<"_";
        }
        for(int j = 0; j < ch ; j++){
            cout<<(char)('A'+j);
        }
        cout<<"\n";
    }
};
void lowerTriangle(int n ) {
    for(int i = 1 ; i < n ; i++){
        int spaces = i ;
        int ch = 2*n-2*i-1;

        for(int j = 1 ; j <= spaces; j++){
            cout<<"_";
        }
        for(int j = 1 ; j <= ch; j++){
            cout<<(char)('A'+j-1);
        }
        cout<<"\n";
    }
};
int main() {
    int n ;
    cout<<"Print value of n (should be an odd number) ";
    cin>>n;
    printPattern(n);
    lowerTriangle(n);
    return 0;
}