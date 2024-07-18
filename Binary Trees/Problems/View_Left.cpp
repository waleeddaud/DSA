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
vector<int> LeftView(Node *root)
{
   // Your code here
   //bfs
    vector<int> ans;
    if (root == NULL )    return ans;
    //for queue current level , and Node* addres of node
    
    queue <pair<Node*, int> >q;
    // First one ist level order and second is node ->data 
    map <int, int > mp; 
    q.push(make_pair(root , 0));
    while(!q.empty()){
        Node* temp = q.front().first;
        int level = q.front().second;
        //if level not present
        if(mp.find(level) == mp.end()){
            mp[level] = temp->data;
         }
         q.pop();
        if(temp ->left){
            q.push(make_pair(temp ->left,level + 1));
        }
        if(temp ->right){
            q.push(make_pair(temp ->right,level  +1));
        }
    }
    for(auto& i: mp){
        ans.push_back(i.second);
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
    cout << LeftView(root) ;
 
return 0;
}