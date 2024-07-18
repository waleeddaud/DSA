//Vertical Order Traversal of Binary Tree
//LeetCode Hard


#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<set>

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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        //hd is horizontal distance 
        if(root == NULL){
            return ans;
        }
        //in queue we made a pair of horizontal distance,current level ,
        //address to node
        queue <pair<int , pair<int , TreeNode*>>> q;
        map <int, map<int,multiset<int>>> mp;
        q.push(make_pair(0, make_pair( 0 , root) ));
        while(!q.empty()){
            TreeNode* temp = q.front().second.second;
            int hd = q.front().first;
            int level = q.front().second.first;
            mp[hd][level].insert(temp->val);
            q.pop();

            if(temp ->left != NULL){
                q.push(make_pair(hd-1 ,make_pair(level+1 , temp->left)) );
            }
            if(temp->right != NULL){
                q.push(make_pair(hd+1 , make_pair(level+1 , temp->right)) );
            }
        }
        for(auto& i:mp){
            vector<int> col;
            for(auto& j: i.second){
                for(auto& k: j.second)
                    col.push_back(k);
            }
            ans.push_back(col);
        } 
        return ans;

    }
};
int main()
{
    
    return 0;
}