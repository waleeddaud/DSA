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
  void solve(TreeNode* root, int targetSum , vector<int>& path,int & count ){
        if(root == NULL)    return;
        path.push_back(root -> val);
        solve(root -> left, targetSum , path, count);
        solve(root ->right, targetSum , path, count);

        //Find path sum from back if any
        long long int sum =0;
        for(int i=path.size()-1;i>=0 ;i--){
            sum+=path[i];
            if(sum==targetSum )    count++;
        } 
        path.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root== NULL )    return 0;
        int count =0 ;
        vector <int> path;
        solve(root, targetSum , path, count);
        return count;
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