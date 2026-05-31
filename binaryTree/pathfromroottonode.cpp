#include<iostream>
#include<vector>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
    public: 
      bool getPath(TreeNode* A , vector<int> &ans , int B){
        if(A == NULL) {
            return false;
        }

        ans.push_back(A->val);

        if(A->val == B){
            return true;
        }

        if(getPath(A->left , ans , B) || getPath(A->right , ans , B)){
            return true;
        }

        ans.pop_back();
        return false;


      }
     
      vector<int> solve(TreeNode* A , int B){
        vector<int> ans;

        if(A == NULL){
            return ans;
        }
      getPath(A , ans , B);
          
      return ans;
      }

};