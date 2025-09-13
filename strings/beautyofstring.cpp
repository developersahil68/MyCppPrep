#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int beautySum(string s) {
    int n = s.length();
    int totalBeauty = 0;
    
    for (int i = 0; i < n; i++) {
        vector<int> freq(26, 0); 
        
        for (int j = i; j < n; j++) {
            freq[s[j] - 'a']++;
            
            int maxFreq = 0;
            int minFreq = INT_MAX;
            
            for (int k = 0; k < 26; k++) {
                if (freq[k] > 0) {
                    maxFreq = max(maxFreq, freq[k]);
                    minFreq = min(minFreq, freq[k]);
                }
            }
            
            totalBeauty += (maxFreq - minFreq);
        }
    }
    
    return totalBeauty;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    int result = beautySum(s);
    cout << "Sum of beauty of all substrings: " << result << endl;
    
    return 0;
}