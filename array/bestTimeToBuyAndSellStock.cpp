#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> num = {4 , 2 , 8 , 9 , 6 , 7 };
    int n = num.size();
  

    int minimum = num[0];
    int profit = 0;
    int maxProfit = 0;

    for(int i = 1 ; i <n ; i++){
       profit = num[i] - minimum ;
       maxProfit = max(profit , maxProfit);

       minimum = min(num[i] , minimum);
    }
     cout<<maxProfit;
    return 0;
};