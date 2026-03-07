#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> primsfactors(int n){
    vector<int> ans;
    for(int i = 2 ; i <= sqrt(n); i++ ){
        if(n % i == 0){
            ans.push_back(i);
        }
        while(n % i ==0){
            ans.push_back(i);
            n = n/i;
        }
    }
    if(n != 1){
        ans.push_back(n);
    }

    return ans;
}

int main() {
 vector<int> ans = primsfactors(37);

 for(int i = 0; i < ans.size(); i++){
    cout<<ans[i]<< " ";
 }


}