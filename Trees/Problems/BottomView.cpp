#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;
struct Node
{
    int data;
    Node* left, * right;
    Node(int data=0):data(data){
        left = nullptr;
        right = nullptr;
    }
}; 
vector<int> BottomView(Node *root)
    {
        //Your code here
        vector<int> ans;
        
        if(root == NULL)
            return ans;
            //horizontal distance ,  Node* 
        queue <pair<int , Node* >> q;
        map   <int , Node* > mp;
        q.push(make_pair(0,root)) ;  
        while(!q.empty()){
            Node *temp = q.front().second;
            int hd     = q.front().first;
            mp[hd] = temp;
            q.pop();
            if(temp ->left){
                q.push(make_pair(hd -1, temp ->left));
            }
            if(temp ->right){
                q.push(make_pair(hd +1, temp ->right));
            }
        }
        for(auto& i:mp ){
            ans.push_back(i.second->data);
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
     Node* root = new Node(5);
    root ->left = new Node(10);
    root -> right = new Node (15);
    root ->left->left = new Node (20);
    root ->left->right = new Node (25);
    root ->right->left = new Node (30);
    root ->right->right = new Node (35);
    cout << BottomView(root) ;
 
return 0;
}