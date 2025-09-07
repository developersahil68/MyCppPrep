#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

using namespace std;

bool isValid(string s) {
    stack<char> st;
    unordered_map<char, char> matching = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };
    
    for (char c : s) {
        if (matching.find(c) != matching.end()) {
            if (st.empty() || st.top() != matching[c]) {
                return false;
            }
            st.pop(); 
        } else {
            st.push(c);
        }
    }
    
    return st.empty();
}

int main() {
    bool res = isValid("()[]{}");
    cout<<res;


    return 0;
}