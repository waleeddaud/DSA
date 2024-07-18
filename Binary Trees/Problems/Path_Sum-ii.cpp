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
  void solve(TreeNode* root, int targetSum , int sum , vector<vector<int>> &answer, vector<int> &row){
        if( root == NULL )  return;
        row.push_back(root -> val);
        sum += root -> val;
        solve(root ->left, targetSum, sum , answer,row );
        solve(root ->right, targetSum, sum , answer,row );
        if(root->left == NULL && root -> right == NULL && sum ==targetSum){
            answer.push_back( row );
        }
        row.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector< int>> answer;
        if(root == NULL )   return answer;
        vector<int> row;
        int sum =0;
        solve(root, targetSum , sum,answer, row);
        return answer;
    }

ostream& operator<<(ostream& out,const vector<vector<int>> arr ){
        for(int i=0;i<arr.size() ;i++){
            for(int j=0;j<arr[i].size();j++)
                out << arr[i][j] <<" ";
            out<< endl;
        }
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
    
    cout<< pathSum(root, 32);
    return 0;
}