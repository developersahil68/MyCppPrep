#include<iostream>
using namespace std;


int print(int n ){
    
    if( n == 1) return 1; 
   
    return n * print(n-1);

    
}

int main() {

   int sum =  print(10 );

  cout<<sum;

}