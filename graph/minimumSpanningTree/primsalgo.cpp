#include<vector>
#include<queue>
#include<iostream>

using namespace std;

class Solution{

public:
 int mstree(int v , vector<vector<int>> adj[]){

    priority_queue<pair<int, pair<int, int>>  , vector<pair<int, pair<int, int>> > , greater<pair<int, pair<int, int>> >> pq;

    vector<int> vis(v , 0);

    vector<pair<int , int>> mst;
    
    int totalSum = 0;

    pq.push({0 , {0 , -1}});


    while(!pq.empty()){
        int node = pq.top().second.first;
        int wt = pq.top().first;
        int parent = pq.top().second.second;
        pq.pop();

        if(vis[node] != 0) continue;
        vis[node ] = 1;

        if(parent != -1){

            mst.push_back({parent  , node});
        }
        totalSum += wt;

        for(auto it : adj[node]){
            int adjnode = it[0];
            int adjwt = it[1];

            if(vis[adjnode] != 1){
                pq.push({adjwt , {adjnode, node}});
            }

        }
    }
    return totalSum;
 }

};


int main() {

	int V = 5;
	vector<vector<int>> edges = {{0, 1, 2}, {0, 2, 1}, {1, 2, 1}, {2, 3, 2}, {3, 4, 1}, {4, 2, 2}};
	vector<vector<int>> adj[V];
	for (auto it : edges) {
		vector<int> tmp(2);
		tmp[0] = it[1];
		tmp[1] = it[2];
		adj[it[0]].push_back(tmp);

		tmp[0] = it[0];
		tmp[1] = it[2];
		adj[it[1]].push_back(tmp);
	}

	Solution obj;
	int sum = obj.mstree(V, adj);
	cout << "The sum of all the edge weights: " << sum << endl;

	return 0;
}