//Split a Circular Linked List into two halves
//This question is available on Geeks for Geeks

//The structure of linked list is the following
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = nullptr;
  }
};


//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.


void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    //Length
     if(head==nullptr || head->next == nullptr){
        *head1_ref = head;
        *head2_ref = nullptr;
    }
 
    Node* fast = head;
    Node* slow = head;
    while(fast->next != head && fast->next->next != head){
       fast=fast->next->next;
       slow = slow->next;
    }
    //in case of odd number of nodes 
    if(fast->next!=head){
        fast= fast->next;
    }
    //now consider slow is mid 
    *head1_ref = head;
    *head2_ref =slow->next;
    //slow is end of first list 
    fast->next = slow->next;
    slow->next = head;
    //fast is end of end list
    
    
   
    
    
}