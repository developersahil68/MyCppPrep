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