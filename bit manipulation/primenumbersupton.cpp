#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if(n < 2) return 0;
         int count = 0;
        vector<int> prime(n, 1);
        
        for(int i = 2 ; i* i < n; i++){
          if(prime[i] == 1){
            for(int j = i*i ; j < n ; j+=i){
                prime[j]=0;
            }
          }
        }
       
        for(int i = 2 ; i <n ; i++){
            if(prime[i] == 1){
                count++;
            }
        }
        return count;

    }
};