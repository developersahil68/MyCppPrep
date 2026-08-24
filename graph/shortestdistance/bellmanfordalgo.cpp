#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> bellmanford(int N , vector<vector<int>> & edges , int start){

        vector<int> dist(N , 1e9);

        dist[start] = 0;

        for(int i = 0 ; i < N-1 ; i++){
            for(auto it : edges){
                int u = it[0];
                int v = it[1];
                int wt = it[2];

                if(dist[u] != 1e9 && dist[u] +  wt < dist[v]){
                    dist[v] = dist[u] + wt;
                }
            }
        }
// Nth relaxation to check negative cycle
        for(auto it : edges){
                 int u = it[0];
                int v = it[1];
                int wt = it[2];

            if(dist[u] != 1e9 && dist[u] +  wt < dist[v]){
              return {-1};
            }
        }

        return dist;
    }
};