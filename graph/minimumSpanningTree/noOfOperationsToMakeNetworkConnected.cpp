#include<vector>
using namespace std;


class DisjointSet {

    public:
    vector<int> rank , ultimate_p;

    DisjointSet(int n) {
        rank.resize(n+ 1 , 0);
        ultimate_p.resize(n+1);
   
        for(int i = 0 ; i < n ; i++){
            ultimate_p[i] = i;
        }

    }
    
    int findUPar(int node) {
        if(node == ultimate_p[node]) return node;

        return ultimate_p[node] = findUPar(ultimate_p[node]);


    }

    void unoinByRank(int a , int b){

        int ultimate_p_of_a = findUPar(a);
        int ultimate_p_of_b = findUPar(b);

        if(rank[a] > rank[b]){
            ultimate_p[ultimate_p_of_b] = ultimate_p_of_a;
        }else if(rank[b] > rank[a]){
            ultimate_p[ultimate_p_of_a] = ultimate_p_of_b;
        }else{
             ultimate_p[ultimate_p_of_b] = ultimate_p_of_a;
             rank[ultimate_p_of_a]++;
        }
    }
   
};

class Solution{


    public:
    int makeConnected(int n , vector<vector<int>> &connections ){
        DisjointSet ds(n);
        int countExtras = 0;

        for(auto it : connections){
            int node1 = it[0];
            int node2 = it[1];

            if(ds.findUPar(node1) == ds.findUPar(node2)){
                countExtras++;
            }else{
                ds.unoinByRank(node1 , node2);
            }


        }

        int cntC = 0;

        for(int i = 0 ; i < n ; i++) {
            if(ds.ultimate_p[i] == i){
                cntC++;
            }
        }

        int ans = cntC -1;

        if(countExtras >= ans ) return ans ;
        return -1;

    }

};


class Solution1{
    public:
int operationsToMakeNetworkConnected(vector<vector<int>> &connections){
  int n = connections.size();

  DisjointSet ds(n);

  int extraCnt = 0;
  for(auto it : connections){
    int node1 = it[0];
    int node2 = it[1];

    if(ds.findUPar(node1) == ds.findUPar(node2)){
    extraCnt++;
    }else{
        ds.unoinByRank(node1 , node2);
    }
  }

  int cntComp =0;

for(int i = 0 ; i < n ; i++){
    if(ds.ultimate_p[i] == i){
        cntComp++;
    }
}

  int ans = cntComp-1;

  if(extraCnt >= ans) return ans;
  return -1;
}
};