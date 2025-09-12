#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
             if (s.length() < 1) { 
            return "";
        }

        int start = 0; 
        int maxLength = 1; 


        for(int i = 0 ;i < s.length() ; i++){

             int len1 = expandFromCenter(s, i, i); 
            
            int len2 = expandFromCenter(s, i, i + 1);

            int len = max(len1, len2); 


              if (len > maxLength) { 
                start = i - (len - 1) / 2; 
                maxLength = len; 
            }
        }
         return s.substr(start, maxLength); 
    }
    private: 
         int expandFromCenter(const string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--; 
            right++; 
        }
       
        return right - left - 1; 
    }
};