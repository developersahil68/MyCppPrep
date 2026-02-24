#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> currStr;
        func(0 , s , currStr , res);
        return res;
        
    }
    void func(int idx , string &s , vector<string> &currStr , vector<vector<string>> &res){
        if(idx == s.size()){
            res.push_back(currStr);
            return;
        }

        for(int i = idx; i < s.size() ; i++){
            if(isPalindrome(s , idx , i )){
                currStr.push_back(s.substr(idx , i-idx + 1));
                func(i+1 , s , currStr , res);
                currStr.pop_back();
            }
        }
    }
    bool isPalindrome(string s , int start , int end){
        while(start <= end){
            if(s[start++] != s[end--]){
                return false;
            }
        }
            return true;
    }
};