#include<iostream>
#include<vector>
using namespace std;

class Solution{
    private:
     void dfs(int node , int vis[] , vector<int> &dfslist , vector<int> adj[]){

         vis[node] = 1;
         dfslist.push_back(node);

        for( auto it : adj[node]){
            if(!vis[it]){
                dfs(it , vis , dfslist , adj);
            }
        }

     }

    public:
    vector<int> dfsOfGraph(int V , vector<int> adj[]){
      
       int vis[V] = {0};
       int start = 0;
        vector<int> dfslist;
         dfs( start , vis , dfslist , adj );

         return dfslist;
    }
};