#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
    Node(int data=0) : data(data), left(nullptr), right(nullptr) {}
}; 

void insert(Node*& root, int d){
    // base case 
    if(root == nullptr){
        root = new Node(d);
        return;
    }
    if(d < root->data){
        insert(root->left, d);
    }
    else if(d > root->data){
        insert(root->right, d);
    }
    return;
}

void levelOrderTraversal(Node* root){
    if (root == nullptr) {
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == nullptr){
            cout << "\n";
            if(!q.empty())
                q.push(nullptr);
        }
        else {
            cout << temp->data << " ";
            if(temp->left != nullptr)
                q.push(temp->left);
            if(temp->right != nullptr)
                q.push(temp->right);
        }
    }
}
void deleteNode(Node* root,int data){
    
}

void input(Node*& root){
    int data;
    cin >> data;
    while(data != -1){
        insert(root, data);
        cin >> data;
    }
}
int minimum(Node* root){
    int mini = -1 ;
    if(root != nullptr) mini = root ->data;
    Node * temp = root;
    if(temp == nullptr){
        return mini;
    }
    while(temp -> left != NULL){
        temp = temp -> left;
         mini= temp ->data;
    }
    return mini;
}
int maximum(Node* root){
    int maxi = -1;
    if(root != nullptr) maxi = root ->data;
    Node * temp = root;
    if(temp == nullptr){
        return maxi;
    }
    while(temp -> right != NULL){
        temp = temp -> right;
         maxi= temp ->data;
    }
    return maxi;
}
 Node* searchBST(Node* root, int val) {
        if(root == NULL){
            return root;
        }
        if(val == root -> data){
            return root;
        }
        else if (val > root -> data){
            return searchBST(root -> right, val);
        }
        else /*if(data < root -> data)*/{
            return searchBST(root -> left, val);
        }
        //return NULL;
    }

int main()
{
    Node* root = nullptr;
    input(root);
    levelOrderTraversal(root);
    cout<< endl<< "Minimum : "<<minimum(root);
    cout<< endl<< "Maximum : "<<maximum(root);
    return 0;
}
