#include<iostream>
#include<vector>
using namespace std;
struct Node
{
    int data;
    Node* left, * right;
    Node(int data) :data(data){
        left = nullptr;
        right= nullptr;
    }
};
void left(Node* root , vector<int> & ans){
        if(root == NULL || (root -> left ==NULL && root -> right ==NULL)){
            return;
        }
        ans.push_back( root -> data) ;
        if(root -> left  )
            left  (root ->left, ans);
        else 
            left (root -> right , ans );
            
        
    }
    void leafNodes(Node* root , vector<int>  & ans){
        if(root == NULL ){
            return;
        }
        
        //ans.push_back(root -> data) ;
        leafNodes  (root ->left, ans);
        leafNodes  (root ->right, ans);
        bool cond = root ->left == NULL && root->right ==NULL;
        if(cond){
            ans.push_back(root -> data);
            return;
        }
    }
    void right(Node* root , vector<int> & ans){
        if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return;
        }
        if (root->right) {
            right(root->right, ans);
        } else {
            right(root->left, ans);
        }
        ans.push_back(root->data);

        
    }
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root == NULL )   return ans;
        ans.push_back(root -> data);
        left(root-> left , ans);
        
        leafNodes(root-> left,ans);
        leafNodes(root-> right,ans);

        
        right(root -> right , ans);
        //ans.pop_back();
        return ans;

        
    }
    void print(vector<int> arr){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i] <<" ";
        }
        cout<< endl;
    }
int main()
{
    Node* root = new Node(5);
    root ->left = new Node(10);
    root -> right = new Node (15);
    root ->left->left = new Node (20);
    root ->left->right = new Node (25);
    root ->right->left = new Node (30);
    root ->right->right = new Node (35);
    print(boundary(root));
    
    return 0;
}