
#include<iostream>
using namespace std;

int main() {

    int num = 864514156342;

    int reversed = 0;
    while(num > 0){
        int lastnum = num % 10;
        
        num = num / 10;

        if(reversed > INT_MAX / 10 || reversed == INT_MAX /10 && lastnum > 7) return 0;
        if(reversed < INT_MIN / 10 || reversed == INT_MIN / 10 && lastnum < -8) return 0;

        reversed = reversed * 10 + lastnum;
    }
    cout<<reversed;

    return 0;
}