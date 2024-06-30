#include<iostream>
#include<queue>
#include<vector>
using namespace std;
//in post order traversal LRN
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
void  levelOrderTraversal(node* root){
    queue <node*> q;
    vector<vector<int>>  answer;
    q.push(root);
    q.push(nullptr);
    while(!q.empty()){
        
        node* temp = q.front();
        q.pop();
        if(temp == nullptr){
            cout<<"\n";
            if(!q.empty())
                q.push(nullptr);

        }
        else {
            cout<<temp->data <<" ";
            
            if(temp -> left != nullptr)
                q.push(temp->left) ;
            if(temp->right != nullptr)
                q.push(temp->right) ;
        }
        
    }
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
    levelOrderTraversal(root);
    return 0;
}