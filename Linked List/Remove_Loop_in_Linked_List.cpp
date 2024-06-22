//Remove Loop in Linked List
//Problem available on Geeks for geeks


//structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};



class Solution
{
    public:
    //Function to remove a loop in the linked list.
    Node *detectCycle(Node *head) {
        if(head==nullptr || head->next==nullptr) return nullptr;
        //First Apply Floyd's cycle detection 
        //And find point of intersection
        Node* fast = head;
        Node* slow = head;
        while(fast!=nullptr && fast->next !=nullptr){
            slow = slow-> next;
            fast = fast->next->next;
            if(slow == fast){
                break;
            }
        }
        if(slow!=fast)  return nullptr;
        slow = head;
        while(slow!=fast){
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node *startLoop = detectCycle(head);
        Node* temp = startLoop;
        if(temp!=nullptr){
            while(temp->next != startLoop){
                temp=temp->next ;
            }
            temp->next = nullptr;
        }
        
    }
};