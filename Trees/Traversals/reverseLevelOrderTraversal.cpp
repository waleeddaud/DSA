#include<iostream>
#include<stack>
#include<queue>
using namespace std;

//Intuition can we use stacks 

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
void  reverseLevelOrder(node* root){
    node* temp = root;
    
    if(temp == NULL)
        return;
    queue<node*> q;
    stack<node*> s;
    q.push(temp);
    q.push(nullptr);
    while(!q.empty()){
        temp = q.front();
        
        q.pop();
        s.push(temp);
        if(temp != nullptr){
            cout<<temp->data <<" "; 
            if(temp->right!=nullptr){
                q.push(temp->right);
            }
            if(temp->left!=nullptr){
                q.push(temp->left);
            }
        }else{
            cout<<"\n";
            if(!q.empty())
                q.push(nullptr);
        }
    }
    cout<<"\n\n";
    while(!s.empty()){
        if(s.top()!=nullptr){
            int val = s.top()->data;
            cout<< val <<" ";
        }else{
            cout<<"\n";
        }
        s.pop(); 
        
    }
}
int main()
{
    node* root = new node(3);
    root ->left = new node(9);
    root -> right = new node (20);
    // root ->left->left = new node (20);
    // root ->left->right = new node (25);
    root ->right->left = new node (15);
    root ->right->right = new node (7);
    reverseLevelOrder(root);
    return 0;
}