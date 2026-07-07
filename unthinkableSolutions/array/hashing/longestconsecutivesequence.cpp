#include<vector>
#include<unordered_set>
using namespace std;


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        
        for (int num : nums) {
            // Only start counting if this is the START of a sequence
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentStreak = 1;
                
                // Count forward while consecutive numbers exist
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    currentStreak++;
                }
                
                longest = max(longest, currentStreak);
            }
        }
        return longest;
    }
};