#include<iostream>
#include<vector>
using namespace std;

class Solution {

    private:
     bool dfs(int node , int vis[] , int pathvis[] , vector<int> adj[]){

        vis[node] = 1;
        pathvis[node] = 1;

        for( auto it: adj[node]){
            if(!vis[it]){
               if( dfs(it , vis , pathvis , adj)) return true;
            }else if(pathvis[it]){
                return true;
            }
        }
        pathvis[node] = 0;
        return false;
     }
    public:
     bool cycleCheck(int V , vector<int> adj[]){

        int vis[V] = {0};
        int pathvis[V] = {0};

        for(int i = 0 ; i  < V ; i++){
            if(!vis[i]){
                if(dfs(i , vis , pathvis , adj)) return true;
            }
        }
        return false;

     }
};