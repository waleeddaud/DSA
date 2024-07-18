#include<iostream>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
int maxDepth(TreeNode* root) {
    if(root == nullptr)
        return 0;
    int left = maxDepth( root->left );
    int right = maxDepth( root->right );

    return (max(left,right) + 1);

}
int Diameter(TreeNode* root){
    if(root == nullptr) return 0;
    int dia = maxDepth(root->left) + maxDepth(root->right) ;
    int left = Diameter(root -> left);
    int right = Diameter(root->right);

    return  max(max(dia, left) , right);
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
    cout << maxDepth(root) <<endl;
    cout << Diameter(root) <<endl;

    return 0;
}