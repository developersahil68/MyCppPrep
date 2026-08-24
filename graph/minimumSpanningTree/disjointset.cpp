#include<vector>
#include<iostream>
using namespace std;

class DisjointSet {
   vector<int> parent , rank; 
   public:

   DisjointSet(int n) {
    rank.resize(n+1 ,0);
    parent.resize(n+1);

    for(int i = 0 ; i <=n ; i++) {
        parent[i] = i;
    }
}

    int findParent(int node){
        if(node == parent[node]) return node;

        return parent[node] = findParent(parent[node]);
    }

    void unionByRank(int u , int v){
        int ultimateP_ofu = findParent(u);
        int ultimateP_ofv = findParent(v);

        if(ultimateP_ofu == ultimateP_ofv) return ;

        if(rank[ultimateP_ofu] < rank[ultimateP_ofv]){
            parent[ultimateP_ofu] = ultimateP_ofv;
        }else if (rank[ultimateP_ofv] < rank[ultimateP_ofu]){
            parent[ultimateP_ofv] = ultimateP_ofu;
        }else{
            parent[ultimateP_ofv] = ultimateP_ofu;
            rank[ultimateP_ofu]++;
        }
    }
};


int main() {
    DisjointSet ds(7);
    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);
    ds.unionByRank(4, 5);
    ds.unionByRank(6, 7);
    ds.unionByRank(5, 6);
    // if 3 and 7 same or not
    if (ds.findParent(3) == ds.findParent(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";

    ds.unionByRank(3, 7);

    if (ds.findParent(3) == ds.findParent(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";
    return 0;
}