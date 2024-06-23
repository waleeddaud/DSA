//Clone Linked List Random Pointer
// LeetCode Problem
//Time complexity O(n)
//Space Complexity O(n)
using namespace std;
#define NULL nullptr
// Definition for a Node.
#include<map>
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)  return NULL;

        //First step is to copy the linked List with help of next and create a map of existing node with 
        //new node 
        map<Node*,Node*> mapping;
        // in mapping key is node* of original, value is node* of new node
        Node* ans=nullptr;
        Node* temp = head;
        ans = new Node(temp->val);
        Node* headAnswer= ans;
        mapping[temp] = ans;
        temp= temp->next;
        while(temp!=NULL){
            ans->next = new Node(temp->val);
            ans = ans->next;
            mapping[temp] = ans ;
            temp = temp->next;
        }

        //Now we have mapping and we want to assign the values of random pointers to it
        ans = headAnswer;
        temp = head;
        while(ans!=NULL){
            ans->random = mapping[ temp -> random ];
            temp = temp ->next;
            ans = ans -> next;

        }
        return headAnswer;

    }
};