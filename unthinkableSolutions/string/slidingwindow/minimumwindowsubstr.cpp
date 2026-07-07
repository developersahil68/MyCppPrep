#include<string>
#include<unordered_map>
#include<climits>
using namespace std;

class Solution {
    public:
    string minWindow(string s , string t){
        
        int n = s.length();
        int m = t.length();
        int l =0 ;
        int r = 0;
        int minlength = INT_MAX;
        int cnt = 0;
        int startIdx = -1;
        unordered_map<char , int> mp;

        for(int i = 0 ; i < m ; i++){
            mp[t[i]]++;
        }

        while(r < n){
            if(mp[s[r]] > 0){
                cnt++;
            }
            mp[s[r]]--;
            r++;

            while(cnt == m){
                if((r-l) < minlength){
                    minlength = r-l;
                    startIdx = l;
                }
                mp[s[l]]++;
                if(mp[s[l]] > 0){
                    cnt--;
                }
                l++;
            }
        }
        return startIdx == -1 ? " " : s.substr(startIdx , minlength);
    }



};