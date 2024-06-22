//Detect a loop in Linked List
//This is Geeks for Geeks Problem


struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }

};
class Solution

{
#include<map>
    
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    
    {
        // your code here
        if(head == nullptr || head->next==nullptr ) return false;
        map<Node* , bool> visited ; 
        Node* temp = head;
        while(temp!=nullptr){
            if(visited[temp] == true){
                return true;   
            }else
                visited[temp] = true;
            temp=temp->next;
        }
        return false;
        
    }
};