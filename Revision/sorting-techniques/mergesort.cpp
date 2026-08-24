#include<vector>
using namespace std;

void merge(vector<int> &nums , int left , int mid, int right ){
    vector<int> ans;

    int low = left ;
    int high = mid+1;

    while(low <= mid && high <= right){

        if(nums[low] < nums[high]){
            ans.push_back(nums[low]);
            low++;
        }else{
            ans.push_back(nums[high]);
            high++;
        }

    }

    while(low <= mid){
         ans.push_back(nums[low]);
            low++;
    }
    while(high <= right){
         ans.push_back(nums[high]);
            high++;
    }

    for(int i = left ; i <= right; i++){
        nums[i] = ans[i - left];
    }

}

 void mergesort(vector<int> &nums  ,int left , int right ){
    int n = nums.size();
 
    if( left >= right) return ;

    int mid = left + (right - left)/2;

    mergesort(nums , left , mid );
    mergesort(nums ,  mid+1 , right );
    merge(nums , left , mid , right  );
 }

int main(){

    vector<int> nums = {2 , 5  , 3 , 8 , 9 , 6 , 7}; 
    int n = nums.size();
    mergesort(nums , 0 , n-1 );

    return 0;
}