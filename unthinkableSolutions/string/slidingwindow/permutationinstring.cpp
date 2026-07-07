#include<string>
#include<vector>
using namespace std;


 //maximumsumsubarrayofsizek se milta julta hai
 
class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if( s1.length() > s2.length()) return false;

        vector<int> s1freq(26 ,0);
        vector<int> windowfreq(26 , 0);

        for(int i =  0 ; i < s1.length() ; i++){
            s1freq[s1[i] - 'a']++;
            windowfreq[s2[i] - 'a']++;
        }
       if(s1freq == windowfreq){
        return true;
       }

       for( int i = s1.length() ; i < s2.length() ; i++){
        windowfreq[s2[i] - 'a']++;

        windowfreq[s2[ i - s1.length()] - 'a']--;

          if(s1freq == windowfreq) return true;
       }

       return false;

        
    }
};