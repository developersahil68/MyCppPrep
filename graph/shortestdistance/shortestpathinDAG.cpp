#include<stack>
#include<vector>

using namespace std;

class Solution{
    private:
    void toposort(int node , vector<pair<int, int>> adj[] , int vis[] , stack<int> &st){
        vis[node] = 1;

        for(auto it : adj[node]){
            int v = it.first;
            if(!vis[v]){
                toposort(v , adj , vis , st);
            }
        }
        st.push(node);
    }
    public:
    vector<int> shortestpath(int N , int M , vector<int> edges[]){
        vector<pair<int ,int>> adj[N];

        for(int i = 0; i < M; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            adj[u].push_back({v , wt});
        }

        stack<int> st;
        int vis[N] = {0};
        for( int i = 0; i < N ; i++) {
            if(!vis[i]){
                toposort(i , adj , vis , st );
            }
        }

        // step 2 do the distance thing

        vector<int > dist(N);

        for(int i = 0; i < N ; i++) {
            
            dist[i] = 1e9;
        }

        dist[0] = 0;

        while(!st.empty()){
            int node = st.top();
            st.pop();

            for(auto it: adj[node]){
                int v = it.first;
                int wt = it.second;

                if(dist[node] + wt < dist[v]){
                    dist[v] = wt + dist[node];
                }
            }
        }

         // Replace all unreachable nodes' distances with -1
      for (int i = 0; i < N; i++) {
        if (dist[i] == 1e9) {
          dist[i] = -1;
        }
      }

  return dist;
    }
};

// first time revision

class Solution {
    private: 
     void toposort(int node , vector<pair<int , int>> adj[] , int vis[] , stack<int> &st){
        vis[node] = 1;

        for(auto it : adj[node]){
            int v = it.second;
            if(!vis[v]){
                toposort(v , adj , vis , st);
            }
        }
        st.push(node);
     }
    public:
    vector<int> shortestpath(int N , int M  , vector<int > edges[]){
        vector<pair<int  ,int>> adj[N];

        for(int i = 0 ; i < M ; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];

            adj[u].push_back({v , wt});
        }

        stack<int> st;
        int vis[N]= {0};

        for(int i = 0 ; i < N ; i++){
            if(!vis[i]){
                toposort( i , adj , vis , st);
            }
        }

        // doing second thing that is taking stack items and 

        vector<int> dist(N);

        for(int i = 0 ; i < N ; i++){
            dist[i] = 1e9;
        }

        dist[0] = 0;

        while(!st.empty()){
            int node = st.top();
            st.pop();

            for(auto it : adj[node]){
                int v = it.first;
                int wt = it.second;
                if(dist[node] + wt < dist[v] ){
                    dist[v] = dist[node] + wt;

                }
            }
        }

    }
};