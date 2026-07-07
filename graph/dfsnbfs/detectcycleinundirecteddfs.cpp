#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Solution {

    private:
     bool detect(int node , int parent , int vis[] , vector<int> adj[]){

        vis[node] = 1;

        for(auto it : adj[node]){
            if(!vis[it]){
               if( detect(it , node , vis , adj) == true){
                return true;
               }
            }else if (it != parent){
                return true;
            }
        }
     
        return false;

     }
    public:
     bool isCycle(int V , vector<int> adj[]){
      int vis[V] = {0};  
      for(int i = 0 ; i < V ; i++){
        if(!vis[i]){
           if( detect(i , -1 , vis , adj)){
            return true;
           }
        }
      }
      return false;
     }
};