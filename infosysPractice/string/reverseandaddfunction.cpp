
// Given a number, reverse it and add it to itself unless it becomes a palindrome or return -1 if the number of iterations becomes more than 5. Return that palindrome number if it becomes a palindrome else, it returns -1.

// geekforgeek link https://www.geeksforgeeks.org/problems/sum-palindrome3857/1

class Solution {
    
    private:
    
     int reversenum(int n){
       int rev_num = 0;
       while(n){
         rev_num = rev_num * 10 + n%10;
         n = n /10;
       }
       return rev_num;
     }
    int palincheck(int sum){
        if(sum == reversenum(sum)){
            return 1;
        }
        return 0;
    }
  public:
    int isSumPalindrome(int n) {
        
         if (palincheck(n))
        return n;
        // code here
    
      for(int i = 0 ; i < 5; i++){
          
      int rev_num =    reversenum(n);
      
     n = n + rev_num;
      
     if(palincheck(n)){
         return n;
     }
      }
      return -1;
    }
};