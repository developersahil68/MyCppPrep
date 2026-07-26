#include<iostream>

using namespace std;

// logic is simple GDC(a , b) = GDC(b , a%b)

int main() {



    int n1 = 9;
    int n2 = 8;

    int a = abs(n1);
    int b = abs(n2);

    while(b != 0){
        int remainder = a % b;
         a = b;
         b = remainder;
    }

    cout<<a;


    // cout<<n1% n2;

    return 0;
}