#include<iostream>
#include<vector>

using namespace std;

void printupton(int n){
    if(n == 0) return;

    printupton(n-1);

    cout<<n;
    cout<<endl;
}

int main() {
 

    int n = 100;
    printupton(n);
    return 0;
}