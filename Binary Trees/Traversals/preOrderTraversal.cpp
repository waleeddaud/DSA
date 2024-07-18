//In preorder traversal first data of node is printed then left node data and right node data and so on
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data = 0):data(data){
        left  = nullptr;
        right = nullptr;
    }
};
void preOrderTraversal(node* root){
    if(root == nullptr)
        return;
    //NLR
    cout << root-> data<<" "; 
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
int main(){
    node* root = new node(5);
    root ->left = new node(10);
    root -> right = new node (15);
    root ->left->left = new node (20);
    root ->left->right = new node (25);
    root ->right->left = new node (30);
    root ->right->right = new node (35);
    preOrderTraversal(root);

}