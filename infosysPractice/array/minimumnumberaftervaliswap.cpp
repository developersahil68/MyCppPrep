#include<iostream>
#include<string>
using namespace std;


// You are given a huge integer a
//  consisting of n
//  digits (n
//  is between 1
//  and 3⋅105
// , inclusive). It may contain leading zeros.

// You can swap two digits on adjacent (neighboring) positions if the swapping digits are of different parity (that is, they have different remainders when divided by 2
// ).

// For example, if a=032867235
//  you can get the following integers in a single operation:


// codeforces link https://codeforces.com/contest/1251/problem/C

int main() {
    int t ;
    cin>>t;
    
    while(t--){
        string str ="";
        cin>>str;
        
        
        string odd = "";
        string even ="";
        
        for(int i = 0 ; i < str.size() ; i++){
            if((str[i] - '0' ) % 2 == 0){
                even += str[i];
            }else{
                odd += str[i];
            }
        }
        
        int i = 0;
        int j = 0;
        string ans ="";
        while(i < odd.length() && j < even.length()){
            if(odd[i] < even[j]){
                ans  += odd[i++];
                
            }else{
                ans += even[j++];
            }
        }
        
        while(i < odd.length()){
             ans += odd[i++];
        }
        while(j < even.length()){
             ans  += even[j++];
        }
        
    
         cout << ans << "\n";
    }
    return 0;
}