#include<iostream>
using namespace std;


int main() {

    int a = 032867235;

    int i = 0; 
    int j = 1;

    while(j < n) {
        if(a[i] > a[j] && a[i] % 2 == 0 && a[j]% 2 != 0){
            swap(a[i] , a[j]);
            i++;
            j++;
        }else if(a[i] > a[j] && a[i] % 2 != 0 && a[j]% 2 == 0){
                swap(a[i] , a[j]);
            i++;
            j++;
        }
    }
     
    return 0;
}