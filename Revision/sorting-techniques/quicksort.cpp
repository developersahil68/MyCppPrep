#include<vector>
using namespace std;

int f(vector<int> &nums , int low  , int high){
    int pivot = nums[low];
    int i = low ;
    int j = high;

    while(i < j){
        while(nums[i] <= pivot && i <= high-1){
            i++;
        }
        while(nums[j] > pivot && j >= low+1){
            j--;
        }

        if(i < j){
            swap(nums[i]  , nums[j]);
        }
    }
    swap(nums[low] , nums[j]);

    return j;
}

void qs(vector<int> &nums , int low , int high){
  while(low < high){
    int partition = f(nums , low , high);

    qs(nums , low , partition - 1);
    qs(nums ,  partition + 1 , high);
  }
}

int main() {

    vector<int> nums = {4 , 3 , 1 ,2 , 6 , 5 , 7 , 9};
    int n = nums.size();
    qs(nums , 0 , n-1);


    return 0;
}