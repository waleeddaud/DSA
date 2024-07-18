//zig zag level order Traversal
#include<iostream>
#include<vector>
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
 
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        TreeNode* temp = root;
        if(root == NULL)    return ans;
        queue<TreeNode*> q;
        q.push(temp);
        q.push(NULL);
        vector<int> row;
        while(!q.empty()){
            temp = q.front();
            q.pop();
            if(temp == nullptr){
                ans.push_back(row);
                row.clear();
                if(!q.empty())
                    q.push(nullptr);
            }
            else{
                row.push_back(temp->val);
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
        }
        for(int i=1;i<ans.size();i+=2){
            reverse(ans[i].begin(), ans[i].end());
        }
        return ans;
    }
};
