#include<vector>
#include<unordered_set>
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
    int mostStonesRemovedFromSameRowAndSameCol(vector<vector<int>> &stones) {

        int n = stones.size();
        int maxRow = 0;
        int maxCol = 0;

        for(auto it : stones){
            maxRow = max(maxRow , it[0]);
            maxCol = max(maxCol , it[1]);
        }


        DisjointSet ds(maxRow + maxCol +1);
     for(auto stone : stones){
        int node1 = stone[0];
        int node2 = stone[1] +maxRow +1;

       ds.unoinByRank(node1 , node2);


     }

     unordered_set<int> components;

     for(auto it : stones){
        components.insert(ds.findUPar(it[0]));
     }

     return n - components.size();
    }
};


class Solution1{
    public:

    int stonesRemoved(vector<vector<int>> & stones){

        int n = stones.size();

        int maxRow = 0;
        int maxCol = 0;

        for(auto it : stones){
            maxRow = max(maxRow , it[0]);
            maxCol = max(maxCol , it[1]);
        }

        DisjointSet ds(maxRow + maxCol +1);

        for(auto stone : stones){
            int node1 = stone[0];
            int node2 = stone[1] + maxRow + 1;

            ds.unoinByRank(node1 , node2);

        }

        unordered_set<int> mp;

        for(auto it : stones){
            mp.insert(ds.findUPar(it[0]));
        }

        return n - mp.size();
    }

};