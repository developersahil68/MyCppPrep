#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<climits>
#include<algorithm>
using namespace std;

class Solution{
    public:

    vector<char> changeStoT(string s){
        unordered_map<char , int> mp;

        vector<char> content = {'a' , 'e' , 'i' , 'o' , 'u' , 'A' , 'E' , 'I' , 'O' , 'U'};

        for(int ch = 0 ; ch < content.size() ; ch++){

            mp[content[ch]] = ch; 
        }

        vector<char> vowels ;
        vector<char> consonents ;

        for(auto ch : s){
            if(mp.find(ch) != mp.end()){
                vowels.push_back(ch);
            }else{
                consonents.push_back(ch);
            }
        }
        sort(vowels.begin(), vowels.end());

        int low = 0;
        int high = 0;
        vector<char> ans;

        for(auto it: s){
            if(mp.find(it) != mp.end()){
                ans.push_back(vowels[low]);
                low++;
            }else{
                ans.push_back(consonents[high]);
                high++;
            }
        }

        return ans;
    }
};

int main() {
    string  s = "lEetcOde";
    // string  s = "lYmpH";
    Solution sol;
    vector<char> anss = sol.changeStoT(s);

   for(int i = 0 ; i < anss.size() ; i++) {
    cout<<anss[i]<<" ";
   }
    return 0;
}