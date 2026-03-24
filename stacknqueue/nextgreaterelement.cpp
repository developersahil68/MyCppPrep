#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> NGE(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n);
    stack<int> st;


    for(int i = n - 1; i >=0 ; i--){
       while(!st.empty() && st.top() <= nums[i]){
        st.pop();
       }
       if(st.empty()){
            ans[i] =-1;
       }else{
        ans[i] = st.top();
       }
       st.push(nums[i]);
    }
    return ans;
}

int main(){
    vector<int> nums = {1,3,4,2};
    vector<int> ans = NGE(nums);
for(int i = 0 ; i < ans.size() ; i++){
    cout<<ans[i]<<" ";
}
    return 0;
}