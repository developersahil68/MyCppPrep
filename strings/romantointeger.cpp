#include <iostream>
#include <string>
#include <map>
using namespace std;

int from_roman(const string& roman_numeral) {
    map<char, int> roman_values = {
        {'I', 1},   {'V', 5},   {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int result = 0;
    for (int i = 0; i < roman_numeral.length(); ++i) {
        int current_val = roman_values[roman_numeral[i]];

        if (i < roman_numeral.length() - 1) {
            int next_val = roman_values[roman_numeral[i + 1]];
            if (current_val < next_val) {
                result -= current_val;
            } else {
                result += current_val;
            }
        } else {
            result += current_val;
        }
    }
    return result;
}

int main() {
  int res = from_roman("XXX");
  cout<<res;
    return 0;
}