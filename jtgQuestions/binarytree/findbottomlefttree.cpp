#include<queue>
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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        int answer = root->val;

        while(!q.empty()){
        int n = q.size();

        answer = q.front()->val;
            for(int i = 0 ; i < n ; i++) {

            TreeNode* node = q.front();
            q.pop();

            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }

            }


        }
        return answer;
    }
};