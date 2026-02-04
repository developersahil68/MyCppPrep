#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{

    public:
     void rotate(vector<vector<int>> &matrix){
       
        // first we need to find the transpose 
        int  n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0 ; i < n-1 ; i++){
            for(int j = 1 + i ; j < n ; j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        for(int i = 0; i < n ; i++) {
            reverse(matrix[i].begin() , matrix[i].end());

        }
        
    for(int i= 0 ; i <n ; i++){
        for(int j = 0; j <m; j++){
         cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

     }
};

int main () {
    Solution ans ;
    vector<vector<int>> mat = {{1,2,3} , {4 , 5 , 6} , {7 , 8 ,9}};
    ans.rotate(mat);

    int m = mat.size();
    int n = mat[0].size();

    return 0;
}