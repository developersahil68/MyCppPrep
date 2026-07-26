#include<iostream>
#include<algorithm>
#include<climits>
#include<cmath>
using namespace std;



int main() {

int num = 143;

int totaldigits = 0;
int sum = 0;

int temp = num;

while(temp > 0){
    totaldigits++;
    temp = temp /10;
}

temp =  num;

while(temp > 0){
    int n = temp %10;
    sum += pow(n , totaldigits);
    temp = temp /10;
}

if(sum == num){
    cout<<true;
}else{
    cout<<false;
}


    return 0;
}