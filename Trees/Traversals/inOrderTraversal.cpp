#include<iostream>
using namespace std;
//in  order traversal LNR
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
void  inOrderTraversal(node* root){
    if(root == nullptr)
        return;
    inOrderTraversal(root->left);
    cout<<root->data <<" ";
    inOrderTraversal(root->right);
}
int main()
{
    node* root = new node(5);
    root ->left = new node(10);
    root -> right = new node (15);
    root ->left->left = new node (20);
    root ->left->right = new node (25);
    root ->right->left = new node (30);
    root ->right->right = new node (35);
    inOrderTraversal(root);
    return 0;
}