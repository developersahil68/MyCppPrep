#include<vector>
#include<unordered_map>
#include<climits>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Edge case: empty string
        if (s.empty()) return 0;
        
        // Hash map to store the last occurrence index of each character
        unordered_map<char, int> lastIndex;
        
        int maxLength = 0;      // Track the maximum length found so far
        int left = 0;            // Left pointer of sliding window
        
        // Iterate through string with right pointer
        for (int right = 0; right < s.length(); right++) {
            char currentChar = s[right];
            
            // If character exists in map AND its last index is within current window
            if (lastIndex.find(currentChar) != lastIndex.end() && 
                lastIndex[currentChar] >= left) {
                // Move left pointer to position after the duplicate
                left = lastIndex[currentChar] + 1;
            }
            
            // Update last occurrence of current character
            lastIndex[currentChar] = right;
            
            // Calculate current window length and update max
            int currentLength = right - left + 1;
            maxLength = max(maxLength, currentLength);
        }
        
        return maxLength;
    }
};