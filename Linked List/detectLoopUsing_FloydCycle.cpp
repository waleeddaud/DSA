//Detect a loop in linked list
//Leetcode Linked List Cycle
//It uses Floyd's Cycle Detection Method
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
    
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        //using floyds cycle
        if(head==nullptr )  return 0;
        Node* fast = head;
        Node* slow = head;
        while(fast->next!=nullptr &&fast->next->next!=nullptr)
        {
            slow = slow->next;
            fast= fast->next->next;
            if(fast==slow){
                return 1;
            }
        }
        return 0;
        
    }
};