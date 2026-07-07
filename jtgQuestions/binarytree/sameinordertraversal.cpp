#include <iostream>
#include <vector>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data)
    {
        val = data;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(TreeNode* root, vector<int>& ans)
{
    if(root == nullptr)
        return;

    inorder(root->left, ans);

    ans.push_back(root->val);

    inorder(root->right, ans);
}

bool sameInorder(TreeNode* root1, TreeNode* root2)
{
    vector<int> inorder1;
    vector<int> inorder2;

    inorder(root1, inorder1);
    inorder(root2, inorder2);

    return inorder1 == inorder2;
}

int main()
{
    // Tree 1
    //
    //      2
    //     / \
    //    1   3
    //

    TreeNode* root1 = new TreeNode(2);
    root1->left = new TreeNode(1);
    root1->right = new TreeNode(3);

    // Tree 2
    //
    //      1
    //       \
    //        2
    //         \
    //          3
    //

    TreeNode* root2 = new TreeNode(1);
    root2->right = new TreeNode(2);
    root2->right->right = new TreeNode(3);

    if(sameInorder(root1, root2))
        cout << "Same Inorder Traversal";
    else
        cout << "Different Inorder Traversal";

    return 0;
}