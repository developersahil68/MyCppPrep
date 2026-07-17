#include<vector>
#include<iostream>
#include<climits>
 using namespace std;

int findmaxprofit(vector<int> &prices){
    int n = prices.size();
    int minimum = prices[0];

    int maximum = 0;
    for(int i = 0 ; i < n ; i++) {
        int num = prices[i] - minimum;
        maximum = max(maximum , num);

        minimum = min(minimum , prices[i]);
    }

    return maximum;
}

 int main () {

    vector<int> prices = {7, 10, 1, 3, 6, 9, 2};

    int ans = findmaxprofit(prices);
    cout<<ans;
    return 0;
 }