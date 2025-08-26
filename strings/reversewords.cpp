#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {

    string  s = "the sky is blue";
     reverse(s.begin() , s.end());
     string ans = "";

     int n = s.size();

     for(int i = 0 ; i < n ; i++) {
        string str = "";
        while(i<n && s[i] != ' '){
          str+=s[i];
          i++;
        }
        reverse(str.begin() , str.end());
        if(str.length() > 0){
            ans += " " + str;
        }

     }

     cout<<ans.substr(1);

    
    return 0;
}