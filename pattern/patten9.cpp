#include<iostream>
using namespace std;

int main() {

    int n = 5;


   
   for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= n-i ; j++) {
             cout<<" ";
            }
            for(int k = 1 ; k <= 2*i-1 ; k++){
              cout<<"*";
            }
            cout<<endl;
        }

  for(int i = 1 ; i <= n ; i++){

      // printing spaces
  
      for(int j = 1 ; j <= i-1 ; j++){
          cout<<" ";
      }

      // printing star
      int star = 2 * n - 2 * i +1;
  
      for(int j = 1 ; j <= star ; j++){
          cout<<"*";
      }
      


    cout<<endl;
  }

    return 0;
}