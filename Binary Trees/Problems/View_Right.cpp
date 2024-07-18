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
  vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if (root == NULL )    return ans;
        //for queue current level , and Node* addres of node
        
        queue <pair<TreeNode*, int> >q;
        // First one ist level order and second is node ->data 
        map <int, int > mp; 
        q.push(make_pair(root , 0));
        while(!q.empty()){
            TreeNode* temp = q.front().first;
            int level = q.front().second;
            //if level not present
            mp[level] = temp->val;
            q.pop();
            if(temp ->left){
                q.push(make_pair(temp ->left, level+1));
            }
            if(temp ->right){
                q.push(make_pair(temp ->right,level+1));
            }
        }
        for(auto& i: mp){
            ans.push_back(i.second);
        }
        return ans;
    }


ostream& operator<<(ostream& out,const vector<int> arr ){
    for(int i=0;i<arr.size() ;i++){
        out << arr[i] <<" ";
    }
    out<< endl;
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
    cout << rightSideView(root);
    return 0;
}