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

                if(node + edgeweight < dist[adjnode]){
                    dist[adjnode] = node + edgeweight;
                    pq.push({dist[adjnode] , adjnode});
                }
            }
        }
        return dist;
    }
};