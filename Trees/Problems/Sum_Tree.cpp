#include<iostream>
#include<utility>
struct Node
{
    int data;
    Node* left, * right;
    Node(int data=0):data(data){
        left = nullptr;
        right = nullptr;
    }
}; 

using namespace std;
pair<bool, int> isSum(Node* root){
        if(root == NULL){
            pair<bool, int> p = make_pair(1,0);
            return p;
            
        }
        if(root->left == NULL && root->right==NULL){
            pair<bool, int> p = make_pair(1,root->data);
            return p;
        }
        pair<bool, int> leftSubTree = isSum(root->left); 
        pair<bool, int> rightSubTree = isSum(root->right); 
        
        bool left = leftSubTree.first;
        bool right = rightSubTree.first;
        bool condition = root->data == (leftSubTree.second + rightSubTree.second) ;
        
        pair<bool , int> ans;
        if(condition && left && right ){
            ans.first = true;
            ans.second = root->data + leftSubTree.second + rightSubTree.second;
            
        }else{
            ans.first = false;
        }
        return ans;
    
    }
    bool isSumTree(Node* root)
    {
        return isSum (root).first;    
    }
int main()
{
     Node* root = new Node(3);
    root ->left = new Node(9);
    root -> right = new Node (20);
    root ->left->left = new Node (20);
    root ->left->right = new Node (25);
    root ->right->left = new Node (15);
    root ->right->right = new Node (7);
    cout<<boolalpha<<isSumTree(root);
    return 0;
}