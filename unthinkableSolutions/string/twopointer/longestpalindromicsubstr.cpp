#include<string>
using namespace std;

class Solution{
    private:
     void expand(string &s , int left , int right , int &startpoint , int &maxlen){

        while(left >= 0 && right < s.length() && s[left] == s[right]){
            left--;
            right++;
        }
        // after while loop left is set 1 step behind and right is set one step forward
// rigtht + 1 - 1 + left -1
        int len = right - left - 1;
        if(len > maxlen){
            maxlen = len ;
            startpoint = left+1;
        }

     }
    public:

     string longestPalindrome(string s){
        if(s.empty()) return " ";
        int n = s.length();
        
        int start =0;
        int maxlen = 1;

        for(int i = 0 ; i < n ; i++){

            expand(s , i , i , start , maxlen);
            expand(s , i , i+1 , start , maxlen);
        }
        return s.substr(start , maxlen);
     }
};