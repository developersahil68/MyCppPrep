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
    void changeTree(TreeNode* root){
        if(root == NULL) return ;
        int child = 0;

        if(root->left){
            child += root->left->val;
        }
        if(root->right){
            child += root->right->val;
        }

        if(child >= root->val) root->val = child;
        else{
            if(root->left) root->left->val = root->val;
            else if(root->right) root->right->val = root->val;
        }

        changeTree(root->left);
        changeTree(root->right);

        int tot = 0;
        if(root->left) tot += root->left->val;
        if(root->right) tot+= root->right->val;
        if(root->left || root->right) root->val = tot;
    }
 };