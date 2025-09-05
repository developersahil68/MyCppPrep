#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int maxDepth(string s) {
    int current_depth = 0;
    int max_depth = 0;
    
    for (char c : s) {
        if (c == '(') {
            current_depth++;
            max_depth = max(max_depth, current_depth);
        } else if (c == ')') {
            current_depth--;
        }
    }
    
    return max_depth;
}

int main() {
    string s = "(1+(2*3)+((8)/4))+1";
    cout << maxDepth(s) << endl; // Output: 3
    return 0;
}