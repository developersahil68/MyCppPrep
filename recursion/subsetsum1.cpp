 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;

 void subset(vector<int> &nums , vector<int> &ans , int idx , int n , int sum){
    if(idx == n){

    ans.push_back(sum);
    return;
    }

    sum += nums[idx];
    subset(nums , ans , idx+1 , n , sum);

    sum -= nums[idx];
    subset(nums , ans , idx+1 , n , sum);
 }

 int main() {
    vector<int> nums = {3 , 1 , 2};
    vector<int> ans;
    int n = nums.size();
    subset(nums , ans , 0 ,n  , 0);

    sort(ans.begin() , ans.end());

    for(int  i = 0; i < ans.size() ; i++){
        cout<<ans[i]<< " ";
    }

    return 0;
 }