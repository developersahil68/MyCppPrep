#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums = {-1,0,1,2,-1,-4};
    int n = nums.size();

    set<vector<int>> st;

    for(int i = 0 ; i < n ; i++){
       for(int j = i+1 ; j <n ; j++){
        for(int k = j+1 ; k < n ; k ++){
            if(nums[i] +  nums[j] + nums[k] == 0 ){
             vector<int> temp = {nums[i] , nums[j] , nums[k]};
             sort(temp.begin() , temp.end());
             st.insert(temp);
            }
        }
       }
    }

    vector<vector<int> > ans(st.begin() , st.end());
      for (auto &triplet : ans) {
        for (int num : triplet) cout << num << " ";
        cout << endl;
    }
    return 0;
};