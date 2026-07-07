#include<vector>
#include<climits>
#include<algorithm>
#include<unordered_map>
using namespace std;

// simple sorting solution 

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> mp;

        for(string str : strs){
            string temp = str;
            sort(temp.begin() , temp.end());
            mp[temp].push_back(str);
        }
 
        vector<vector<string>> ans;
        for(auto it : mp){
         ans.push_back(it.second);
        }
        return ans;
    }
};

// character count approach

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        
        for (string s : strs) {
            // Create frequency string as key
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }
            
            // Build key: "1#0#0#2#1#0#..." 
            // (count of each letter)
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += to_string(count[i]) + "#";
            }
            
            groups[key].push_back(s);
        }
        
        vector<vector<string>> result;
        for (auto& pair : groups) {
            result.push_back(pair.second);
        }
        return result;
    }
};