#include<queue>
#include<vector>

using namespace std;

class Solution{
    public:

    vector<int> dijkshtra(int N , vector<vector<int>> adj[] , int src){
        priority_queue<pair<int , int>  , vector<pair<int , int>> , greater<pair<int , int>>> pq;

        vector<int> dist(N);

        for(int i = 0 ; i < N ; i++){
            dist[i] = 1e9;
        }

        dist[src] = 0;

        pq.push({0 , src});

        while(!pq.empty()){
            int node = pq.top().second;
            int wt = pq.top().first;

            pq.pop();

            for(auto it : adj[node]){
                int edgeweight = it[1];
                int adjnode = it[0];

                if(dist[node] + edgeweight < dist[adjnode]){
                    dist[adjnode] = node + edgeweight;
                    pq.push({dist[adjnode] , adjnode});
                }
            }
        }
        return dist;
    }
};


// first time practice
//we are provided with the adjacency list already so we dont need to convert this thing into adjacency list first and then do the work 

// class Solution {
//     public:
//     vector<int> shortestpath(int N , int  M ,vector<vector<int>> adj[] ){

//         vector<int> dist(N , 1e9);

//         dist[0] = 0;

//         priority_queue<pair<int , int > , vector<pair<int, int>> , greater<pair<int , int>>> pq;

//         pq.push({dist[0] , 0});

//         while(!pq.empty()){
//             int node = pq.top().second;
//             int wt = pq.top().first;

//             pq.pop();

//             for(auto it : adj[node]){
//                 int adjnode = it[0];
//                 int adjwt = it[1];

//                 if(dist[node] + adjwt < dist[adjnode]){
//                     dist[adjnode] = dist[node] + adjwt;

//                     pq.push({dist[adjnode] , adjnode});
//                 }
//             }
//         }
//     }
// };