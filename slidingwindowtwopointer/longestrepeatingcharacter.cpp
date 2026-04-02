#include<vector>
#include<string>
#include<climits>

using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);  // Frequency of characters (A-Z)
        int left = 0;
        int maxFreq = 0;          // Maximum frequency in current window
        int maxLength = 0;
        
        for (int right = 0; right < s.length(); right++) {
            // Add current character to window
            freq[s[right] - 'A']++;
            
            // Update maxFreq - could be the new character's frequency
            maxFreq = max(maxFreq, freq[s[right] - 'A']);
            
            // Current window size
            int windowSize = right - left + 1;
            
            // If we need more than k replacements, shrink window
            if (windowSize - maxFreq > k) {
                // Remove left character from window
                freq[s[left] - 'A']--;
                left++;
                // Note: maxFreq might not be accurate now, but it's okay
                // because it's an upper bound, and we only care if it's too large
            }
            
            // Update answer
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};