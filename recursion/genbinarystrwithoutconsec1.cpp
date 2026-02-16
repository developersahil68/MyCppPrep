#include<iostream>
#include<vector>
using namespace std;

void generateStrings(int n , string current , vector<string> &result){
    if(current.length() == n){
      result.push_back(current);
      return ;
    }

    generateStrings(n , current  + '0', result);

    if(current.empty() || current.back() == '0'){
        generateStrings(n , current + '1' , result);
    }
}

vector<string> validBinaryStrings(int n ){
    vector<string> result;
    generateStrings(n , "" , result);
    return result;
}

int main() {

    int n = 4;
    vector<string> result = validBinaryStrings(n);

    for(const string& s : result){
        cout<< s << " ";
    }
    return 0;
}