//LeetCode problem 
//Find if given two trees are same or not
//Time complexity O(N)
#include<iostream>
using namespace std;
//Definition for a binary tree node.
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //base cases
        // if both the nodes are null return true
        if(p == nullptr && q == nullptr)  return 1;
        if((p!=nullptr && q == nullptr)||(p==nullptr && q != nullptr) ) return false;
        bool left = isSameTree(p->left, q->left);
        bool right = isSameTree(p->right, q->right);
        bool check = (p->val == q->val);
        if(left && right && check ) return 1;
        else return 0;
    }
};