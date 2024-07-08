//Problem on Geeks for Geeks
//Sum of nodes on the longest path from root to leaf node
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
void sumTotal(Node* root, int len, int& sum, pair<int, int>& ans){
        //base case
        if(root == NULL){
            if(len > ans.second){
                ans.first = sum;
                ans.second = len;
            }
            else if(len == ans.second){
                ans.first = max(ans.first, sum);
            }
            return ;
        }
        //Recursive calls
        sum += root ->data;
        sumTotal (root -> left , len+1, sum,ans);
        sumTotal (root -> right, len+1, sum, ans);
        sum -= root->data;
        
        
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        if(root == NULL)    return 0;
        int sum =0;
        int len =1;
        pair<int, int > ans = make_pair(0,1);
        sumTotal(root, len ,sum ,ans);
        return ans.first;
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

 
return 0;
}