#include<iostream>
#include<vector>
using namespace std;

class Solution {
private: 
   void comb(string &digits , int idx , string currans , vector<string> &ans, vector<string> &v){
    if(idx == digits.size()){
      ans.push_back(currans);
      return;
    }

   
    int digit = digits[idx] - '0';

    if(digit <= 1){
        comb(digits , idx + 1 , currans , ans , v);
        return;
    }

    for(int j = 0; j  < v[digit].size() ; j++){
        comb(digits , idx+1 , currans + v[digit][j] , ans , v);
    }
   
   }    
public:
    vector<string> letterCombinations(string digits) {
    vector<string> v (10);
    v = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv", "wxyz"};
    vector<string> ans;
    comb(digits , 0 , "" , ans , v);

    return ans;
    }

};