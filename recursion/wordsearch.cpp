#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {

        int m = board.size();
        int n = board[0].size();

        for(int i = 0; i < m ; i++){
            for(int j = 0; j < n ; j++){
                if(dfs(board , word , i , j , 0)){
                    return true;
                }
            }
        }
        return false;
    }

    bool dfs(vector<vector<char>>& board, string &word , int row , int col , int index){
        if(index == word.size()){
            return true;
        }

        if(row < 0 || col < 0 || row >= board.size() || col >= board[0].size() || 
        board[row][col] != word[index]){
            return false;
        }

        char temp = board[row][col];

        board[row][col] = '#';

     bool found =
            dfs(board, word, row + 1, col, index + 1) || 
            dfs(board, word, row - 1, col, index + 1) || 
            dfs(board, word, row, col + 1, index + 1) || 
            dfs(board, word, row, col - 1, index + 1);  

            board[row][col] = temp;

            return found;
    }
};