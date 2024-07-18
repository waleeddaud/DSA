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
  void solve(TreeNode* root, int sum , int targetSum, bool &ans){
        //base case
        if(root == NULL)
            return;
        sum += root -> val;
         solve(root ->left , sum, targetSum, ans);
         solve(root ->right , sum, targetSum, ans);
        bool condition = (root -> left == NULL && root -> right== NULL  && sum == targetSum);
        if (condition){
            ans = 1;
            return;
        }
        //else return false;     
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum =0;
        bool ans =0;
        solve(root, sum, targetSum ,ans);
        return ans;
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
    
    cout<< hasPathSum(root, 32);
    return 0;
}