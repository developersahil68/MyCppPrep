#include<iostream>
using namespace std;

int printNTimes(int n ){
    if(n==1) return 1;
    
  return n * printNTimes(n-1);
    
}

int main() {
   int fact = printNTimes(4);
   cout<<fact<<" ";
    return 0;
}