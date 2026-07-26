#include<iostream>

using namespace std;

int main() {



    int num = 125463201;
    
    if (num == 0)  return 1; 
    int count = 0;
    while(num > 0){
        num = num / 10;
        count++;
    }
    cout<<count;
    return 0;
}