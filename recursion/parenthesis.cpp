#include<iostream>
#include<vector>
using namespace std;

void generateParenthesis(int n , int open , int close ,  string current , vector<string> &result){
    if(current.length() == 2*n){
      result.push_back(current);
      return ;
    }

    if(open < n ){

        generateParenthesis(n ,open + 1 , close , current  + '(', result);
    }

    if(close < open ){
        generateParenthesis(n ,open , close + 1 ,  current + ')' , result);
    }
}

vector<string> parenthesis(int n ){
    vector<string> result;
    int open = 0;
    int close = 0;
    generateParenthesis(n , open , close , "" , result);
    return result;
}

int main() {

    int n = 4;
    vector<string> result = parenthesis(n);

    for(const string& s : result){
        cout<< s << " ";
    }
    return 0;
}