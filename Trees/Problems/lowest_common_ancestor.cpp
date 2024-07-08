//Find the right side view of binary tree
//Leetcode problem 
#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || root==p || root == q)    return root;
        TreeNode* left = lowestCommonAncestor(root ->left , p, q);
        TreeNode* right= lowestCommonAncestor(root ->right, p, q);
        if( left != NULL && right!=NULL)
            return root;
        else if( left == NULL && right!=NULL)
            return right;
        else if( left != NULL && right==NULL)
            return left;
        else    return NULL;
    }


int main()
{
    TreeNode* root = new TreeNode(3);
    root ->left = new TreeNode(9);
    root -> right = new TreeNode (20);
    root ->left->left = new TreeNode (20);
    root ->left->right = new TreeNode (25);
    root ->right->left = new TreeNode (15);
    root ->right->right = new TreeNode (7);
    cout << lowestCommonAncestor(root, root->left, root->left->left)->val;
    return 0;
}