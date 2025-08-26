#include<iostream>
#include<string>
using namespace std;

int main() {

    string  s = "(()())(())(()(()))";
    int n = s.size();
    string ans ;
    int temp = 0;
    for(int i = 0; i <n ; i++) {
      if(s[i] == '('){
          if(temp > 0 ){
              ans.push_back(s[i]);
            }
            temp++;
      }else{
        temp--;
        if(temp > 0){
            ans.push_back(s[i]);

        }
      }
    }

    for(int i = 0 ; i <ans.size() ; i++){
        cout<<ans[i];
    }

    return 0;
}