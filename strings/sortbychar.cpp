#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int> freqMap;
        for(char c : s){
            freqMap[c]++;
        }

        vector<pair<char , int>> charFreq;
        for(auto& entry : freqMap){
            charFreq.push_back(entry);
        }

         sort(charFreq.begin(), charFreq.end(), 
         [](const pair<char, int>& a, const pair<char, int>& b) {
                 return a.second > b.second;
         });

                string result;
        for (auto& pair : charFreq) {
            result.append(pair.second, pair.first);
        }
        
        return result;
    }
};