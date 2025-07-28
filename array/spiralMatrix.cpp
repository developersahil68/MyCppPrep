#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans;
    int n = matrix.size();
    int m = matrix[0].size();
    int left = 0 , right = m-1;
    int top = 0 , bottom = n-1;  


    while(left <= right && top <= bottom){
        for(int i = left ; i <= right; i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int i = top ; i <= bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){

            for(int i = right ; i >= left; i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left <= right){

            for(int i = bottom ; i >= top; i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    for(int num : ans) {
        cout << num << " ";
    }

    return 0; 
};