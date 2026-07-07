#include<iostream>
#include<climits>
using namespace std;
//   Definition for a binary tree node.
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
   int dfs(TreeNode* root ,int maxTillNow){

    if(root == nullptr) return 0;

    int cnt = 0;

    if(root->val >= maxTillNow){
        cnt = 1;
    }

    maxTillNow = max(maxTillNow , root->val);

    cnt += dfs(root->left ,maxTillNow);
    cnt += dfs(root->right ,maxTillNow);

    return cnt;


   }

    int goodNodes(TreeNode* root) {
        return dfs(root , INT_MIN);
        
    }
};