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