#include<iostream>
using namespace std;


int print(int n , int sum){
    
    if( n == 0) return sum; 
     return  print(n-1 , sum+=n);

  
}

int main() {

   int sum =  print(10 , 0);

  cout<<sum;

}