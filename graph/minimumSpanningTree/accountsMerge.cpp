#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<string>
#include<algorithm>
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
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts){

        int n = accounts.size();
        DisjointSet ds(n);
        unordered_map<string , int> mp;
        for(int i = 1 ; i < n ; i++){
            for(int j = 1 ; j < accounts[i].size() ; i++){

                if(mp.find(accounts[i][j]) == mp.end()){
                    mp[accounts[i][j]] = i;
               
                }else{
                 ds.unoinByRank(i , mp[accounts[i][j]]);
                }

            }
        }

        vector<string> sameStr[n];

        for(auto it : mp){
            string mail = it.first;
            int node = it.second;
            sameStr[node].push_back(mail);
        }

        vector<vector<string>> ans;
        for(int i = 0 ; i < n ; i++) {
            if(sameStr[i].empty()) continue;

            sort(sameStr[i].begin() , sameStr[i].end());

            vector<string> temp;
             temp.push_back(accounts[i][0]);
            for(auto it : sameStr[i]){
                temp.push_back(it);
            }
           ans.push_back(temp);
        }
        sort(ans.begin() , ans.end());
    return ans;
    }
};



class Solution1 {
    public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {

        int  n = accounts.size();

        DisjointSet ds(n);

        unordered_map<string , int> mp;

        for(int i = 1 ; i < n ; i++){
           for( int j = 1 ; j < accounts[i].size() ; j++){

              if(mp.find(accounts[i][j]) == mp.end()){
              mp[accounts[i][j]] = i;
              }else{
               ds.unoinByRank( i , mp[accounts[i][j]]);
              }

           }
        }

        vector<string> allMails[n];

        for(auto it : mp){
            string mail = it.first;
            int node = it.second;


            allMails[node].push_back(mail);
        }


        vector<vector<string>> ans;

        for(int i = 0 ; i < n ; i++) {
            vector<string> temp;

            sort(allMails[i].begin() , allMails[i].end());
            temp.push_back(accounts[i][0]);

            for(auto it : allMails[i]){
                temp.push_back(it);
            }
            ans.push_back(temp);

        }

        return ans;
    }

};