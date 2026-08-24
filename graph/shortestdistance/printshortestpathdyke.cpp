#include<queue>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;


class Solution{
    public:
    vector<int> shortestpath(int N , int M , vector<vector<int>> &edges , int src , int dest){

        vector<pair<int , int>> adj[N];
        // iss part main confusion hai laadle
        for(int i = 0 ; i < M ; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];

            adj[u].push_back({v , wt});
        }

        priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>> pq; 
        vector<int > parent(N);

        vector<int> dist(N , 1e9);


        pq.push({0 , src});
        dist[0] = 0;

        while(!pq.empty()){
            int node = pq.top().second;
            int wt = pq.top().first;
            pq.pop();

            for(auto it: adj[node]){
                int adjnode = it.first;
                int adjwt = it.second;

                if(dist[node] + adjwt < dist[adjnode]){
                    dist[adjnode] = dist[node] + adjwt;
                    pq.push({dist[adjnode] , adjnode});
                    parent[adjnode] = node;
                }
            }
        }
        int node = dest;

        vector<int> ans ;

        while(parent[node] != node){
            ans.push_back(node);
            node = parent[node];
        }
 ans.push_back(src);

 reverse(ans.begin() , ans.end());

 return ans ;

    }
};

// attempting second time 

// class Solution{
//     public:
//     vector<int> shortestpath(int N , int  M , vector<vector<int>> & edges , int src , int dst){
//         vector<pair<int , int>> adj[N];

//         for(int i = 0 ; i < M ; i++) {
//             int u = edges[i][0];
//             int v = edges[i][1];
//             int wt = edges[i][2];

//             adj[u].push_back({v , wt});
//         }

//         priority_queue<pair<int ,int> , vector<pair<int , int>>  , greater<pair<int , int>>> pq;

//         vector<int> dist(N , 1e9);
//         vector<int> parent(N);

//         dist[src] = 0;
//         parent[src] = src;

//         pq.push({0 , src});

//         while(!pq.empty()){
//             int node = pq.top().second;
//             int wt = pq.top().first;

//             pq.pop();

//             for(auto it : adj[node]){
//                 int adjnode = it.first;
//                 int adjwt = it.second;

//                 if(dist[node] + adjwt < dist[adjnode]){
//                     dist[adjnode] = dist[node] + adjwt;
//                     pq.push({dist[adjnode] , adjnode});
//                     parent[adjnode] = node; 
//                 }
//             }
//         }
//         vector<int> ans;
//         int node = dst;

//         while(parent[node] != node){
//             ans.push_back(node);
//             node = parent[node];
//         }
//         ans.push_back(src);
//         reverse(ans.begin() , ans.end());

//         return ans;

//     }
// };