#include<iostream>
#include<string>
#include<climits>
using namespace std;

class Solution {
    public:
    //palindrom on a number
    bool validnumpalin(int  s){
         if(s < 0) return false;

         int y = s;
        int rev = 0;
         while(s != 0){
           int pop = y % 10;

           y = y/10;
           if(rev  > INT_MAX / 10) return false;
           if(rev < INT_MIN /10) return false;
           rev = rev * 10 + pop;
         }

      if(rev == s) {
        return true;
       }else{
        return false;
       }
    }
        //palindrom on a string
     bool validPalindrome(string &s ){
        int n = s.length();  
        int i =0 ;
        int j = n-1;

        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
     }
};



