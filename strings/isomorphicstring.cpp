#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main() {

    string s = "egg", t = "add";

        if (s.length() != t.length()) {
        return false;
    }

    char s_to_t[256] = {0}; 
    char t_to_s[256] = {0};

    for (int i = 0; i < s.length(); ++i) {
        char char_s = s[i];
        char char_t = t[i];

        if (s_to_t[char_s] != 0 && s_to_t[char_s] != char_t) {
            return false; 
                }

        if (t_to_s[char_t] != 0 && t_to_s[char_t] != char_s) {
            return false; 
        }

        s_to_t[char_s] = char_t;
        t_to_s[char_t] = char_s;
    }

    cout<<"True";
    return 0;
}