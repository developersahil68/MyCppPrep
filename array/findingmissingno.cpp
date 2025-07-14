#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n = 5;
    vector<int> nums = {0 ,5,  2 , 3  ,1};

    int numbSum = n *(n+1)/2;

    int arraySum = 0;
    for(int i = 0 ; i< n ; i++){

        arraySum+=nums[i];
    }
    cout<<(numbSum-arraySum);
    return (numbSum - arraySum);
};