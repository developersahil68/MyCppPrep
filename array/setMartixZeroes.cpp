#include<iostream>
#include<vector>
using namespace std;

    void markRows( vector<vector<int>> &matrix , int i , int rows ) {
      for(int j = 0 ; j < rows ; j++){
        if(matrix[i][j] != 0){
           matrix[i][j] = -1;
     }
  }
}

    void markColoums(vector<vector<int>> &matrix , int j , int coloums  ) {
      for(int i = 0 ; i < coloums ; i++){
        if(matrix[i][j] != 0){
           matrix[i][j] = -1;
     }
  }
}



int main()
{
    vector<vector<int>> matrix = {
          {1, 1 ,1},
        {1 ,0 ,1},
        {1, 1 ,1}
    };

    int rows = matrix.size();
    int coloums = matrix[0].size();
 
    for(int i = 0; i < rows ; i++){
        for (int j = 0 ; j< coloums ; j++) {
            if(matrix[i][j] ==0){
                markRows( matrix , i , rows);
                markColoums(matrix , j , coloums );
            }
        }
    }

        for(int i = 0; i < rows; i++) {
        for(int j = 0; j < coloums; j++) {
            if(matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }

       for(int i = 0; i < rows; i++) {
        for(int j = 0; j < coloums; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
};

// better solution

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {

//         int m = matrix.size();
//           if (m == 0) return;
//         int n = matrix[0].size();
//        vector<int> rows(m, 0);
//         vector<int> cols(n, 0);

//         for(int i = 0 ; i < m ; i++) {
//             for(int j = 0 ; j < n ; j++){
//                 if(matrix[i][j] == 0){
//                     rows[i] = 1;
//                     cols[j] = 1;
//                 }
//             }
//         }
//         for(int i = 0 ; i < m ; i++) {
//             for(int j = 0 ; j < n ; j++){
//                 if( rows[i] == 1||
//                     cols[j] == 1){
//                    matrix[i][j] = 0;
//                 }
//             }
//         }
//     }
// };


// optimal solution 

// class Solution {
// public:
// void setZeroes(vector<vector>& matrix) {
// int m = matrix.size(), n = matrix[0].size();
// bool rowZero = false, colZero = false;

//     // Step 1: Check first row
//     for (int j = 0; j < n; j++) {
//         if (matrix[0][j] == 0) {
//             rowZero = true;
//             break;
//         }
//     }

//     // Step 2: Check first column
//     for (int i = 0; i < m; i++) {
//         if (matrix[i][0] == 0) {
//             colZero = true;
//             break;
//         }
//     }

//     // Step 3: Traverse the rest (excluding first row & col)
//     for (int i = 1; i < m; i++) {
//         for (int j = 1; j < n; j++) {
//             if (matrix[i][j] == 0) {
//                 matrix[i][0] = 0;  // mark row
//                 matrix[0][j] = 0;  // mark col
//             }
//         }
//     }

//     // Step 4: Update the rest
//     for (int i = 1; i < m; i++) {
//         for (int j = 1; j < n; j++) {
//             if (matrix[i][0] == 0 || matrix[0][j] == 0) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     // Step 5: Handle first row
//     if (rowZero) {
//         for (int j = 0; j < n; j++) matrix[0][j] = 0;
//     }

//     // Step 6: Handle first col
//     if (colZero) {
//         for (int i = 0; i < m; i++) matrix[i][0] = 0;
//     }
// }
// };