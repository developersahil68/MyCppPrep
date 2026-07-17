// shortest path in an undirected graph where the distacmce between every vertices is unit
#include<queue>
#include<vector>

using namespace std;

class Solution{
    public: 
      vector<int> shortestpath(vector<vector<int>> & edges , int N ,int M , int source){
         vector<int> adj[N];

         for(auto it : edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
         }

         int dist[N];
         for(int i = 0; i< N ; i++){
            dist[i] = 1e9;
         }

         dist[source] = 0;
         queue<int> q;

         q.push(source);

         while(!q.empty()){
            int node = q.front();
            q.pop();

            for(auto it : adj[node]){
                if(dist[node] + 1 < dist[it]){
                    dist[it] = 1 + dist[node];
                    q.push(it);
                }
            }
         }

         vector<int> ans(N , -1);
         for(int i = 0; i < N ; i++){
            if(dist[i] != 1e9){
                ans[i] = dist[i];
            }
         }
        return ans;
      }   
};

// practice 1
// class Solution{
//    public:
//    vector<int> shortestpath(vector<vector<int>> & edges  , int N , int M , int source ){

//       vector<int> adj[N];

//       for(auto it : edges){
//          adj[it[0]].push_back(it[1]);
//          adj[it[1]].push_back(it[0]);
//       }

//       queue<int> q;
//       int dist[N];
//       for(int i = 0; i < N ; i++){
//          dist[i] = 1e9;
//       }

//       dist[source] = 0;
//       q.push(source);


//       while(!q.empty()){
//          int node = q.front();
//          q.pop();

//          for( auto it : adj[node]){
//             if(dist[node] + 1 < dist[it]){
//                dist[it] = dist[node] +1;
//                q.push(it);
//             }
//          }
//       }
//    }
// };