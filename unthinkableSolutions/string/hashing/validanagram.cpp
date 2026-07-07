#include<string>
#include<vector>
using namespace std;

class Solution{
    public:
    bool valid(string s , string t){
      vector<int> hash(26 , 0);
      
      for(auto it : s){
        hash[it - 'a']++;
      }

      for(auto it : t){
        hash[it - 'a']--;
        if( hash[it - 'a'] < 0){
            return false;
        }
      }

      return true;
    }
};