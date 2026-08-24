#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {

     
     queue<pair<int , pair<int ,int>>> q;
     int N = grid.size();
     int M = grid[0].size();
     if (grid[0][0] == 1 || grid[N-1][M-1] == 1) return -1;
          if (N == 1 && M == 1) return 1;

     vector<vector<int>> dist(N , vector<int>(M , 1e9));

     dist[0][0] = 1;

     q.push({1 , {0 , 0}});

     int xr[] = {-1, -1, -1,  0,  1, 1, 1,  0};
     int yc[] = {-1,  0,  1,  1,  1, 0, -1, -1};

     while(!q.empty()){
        int xcord = q.front().second.first ;
        int ycord = q.front().second.second ;
        int dis = q.front().first;
        q.pop();


        for(int i = 0 ; i < 8 ; i ++){

            int nr = xcord+xr[i];
            int nc = ycord+yc[i];

            if(nr >= 0 && nc >= 0 && nr < N && nc < M && grid[nr][nc] == 0 && dis + 1 < dist[nr][nc]){
                dist[nr][nc] = 1 + dis;

                if(nr == N-1 && nc == M-1) {
                    return dist[nr][nc];
                }
                q.push({dis + 1 , {nr , nc}});

            }


        }
     }

     return -1;
        
    }
};

// binary maze second time practice

class Solution{
    int shortestPathBinaryMatrix(vector<vector<int>> &grid){

        queue<pair<int , pair<int , int>>> q;

        int N = grid.size();
        int M = grid[0].size();
        vector<vector<int>> dist(N , vector<int>(M , 1e9));
    
        dist[0][0] = 1;
        q.push({1 , {0 ,0}});

        int xcords[] = {-1 , -1 , 0 ,1 , 1 , 1 , 0 , -1};
        int ycords[] = {0 , 1 , 1 ,1 , 0 , -1 , -1 , -1};

        while(!q.empty()){
            int xc = q.front().second.first;
            int yc = q.front().second.second;

            int dis = q.front().first;

            q.pop();

            for(int i = 0 ; i < 8 ; i++) {
               int newx = xc + xcords[i]; 
               int newy = yc + ycords[i];
               
               if(newx >= 0 && newx < N && newy >=0 && newy < M && grid[newx][newy] == 0  && dist[xc][yc] + 1 < dist[newx][newy]){
                dist[newx][newy] = dist[xc][yc] + 1;

                if(newx == N-1 && newy == M-1){
                   return dist[newx][newy];
                }
                q.push({dis+ 1 , {newx , newy}});
               }
            }
        }
        return -1;
    }
};