#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Solution {

    private:
     bool detect(int src , int vis[] , vector<int> adj[]){
        queue<pair<int , int>> q;
        q.push({src , -1});
        vis[src] = 1;

        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for(auto adjacentele : adj[node]){
                if(!vis[adjacentele]){
                    vis[adjacentele] = 1;
                    q.push({adjacentele , node});
                }else if(parent != adjacentele){
                    return true;
                }
            }
        }
        return false;

     }
    public:
     bool isCycle(int V , vector<int> adj[]){
      int vis[V] = {0};  
      for(int i = 0 ; i < V ; i++){
        if(!vis[i]){
           if( detect(i , vis , adj)){
            return true;
           }
        }
      }
      return false;
     }
};