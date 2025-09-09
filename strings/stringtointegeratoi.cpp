#include<iostream>
#include <string>
#include <climits>
using namespace std;
class Solution {
public:
    int myAtoi(std::string s) {

        int sign = 1; 
        long long result = 0;
        int i = 0;

        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        while (i < s.length() && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');

            if (result * sign > INT_MAX) {
                return INT_MAX;
            }
            if (result * sign < INT_MIN) {
                return INT_MIN;
            }
            i++;
        }
        cout<<(result * sign);
        return static_cast<int>(result * sign);
    }
};


int main() {
    return 0;
}