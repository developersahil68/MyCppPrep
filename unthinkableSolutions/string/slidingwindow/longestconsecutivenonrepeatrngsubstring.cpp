#include<iostream>

#include<unordered_map>
#include<vector>
using namespace std;

int findlongestconsecutivenonrepeatingstr(string s){
    unordered_map<char , int> mp;

    int maxlen = 0;

    int l = 0;
    for(int r = 0 ; r < s.length(); r++){
        char currentchar = s[r];

        
        if(mp.find(currentchar) != mp.end() && mp[currentchar] >= l){
            l = mp[currentchar] + 1;
           
        }
        mp[currentchar ] = r;

        int currentlen = r - l + 1;
        maxlen = max(currentlen , maxlen);
    }
    return maxlen;

}

int main() {
    string s = "absabsdfabs";
   int ans = findlongestconsecutivenonrepeatingstr(s);
   cout<<ans; 
   
   return 0;
}