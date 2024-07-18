#include<iostream>
#include<stack>
#include<queue>
using namespace std;

//Intuition can we use stacks 

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data = 0):data(data){
        left  = nullptr;
        right = nullptr;
    }
};
vector<int> diagonal(Node *root) {
  vector<int> ans;
  if (root == NULL) return ans;

  queue<Node*> q;
  q.push(root); // Start with root at diagonal level 0

  while (!q.empty()) {
      
    Node* temp = q.front();
    q.pop();
    
    while(temp !=NULL){
        ans.push_back(temp ->data);
        if(root ->left != NULL)
            q.push(temp ->left);
        temp = temp ->right;
    }
   
    
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
    Node* root = new Node(3);
    root ->left = new Node(9);
    root -> right = new Node (20);
    root ->left->left = new Node (20);
    root ->left->right = new Node (25);
    root ->right->left = new Node (15);
    root ->right->right = new Node (7);
    cout<< diagonal(root);
    return 0;
}