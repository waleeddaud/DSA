//Sort 0, 1 ,2 in linked list without replacing data and changing links of LL
//Problem can be found on Geeks for Geeks

#define NULL nullptr 
  //Node is defined as
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        
        // If the list is empty or has only one node, return the head.
        if (head == NULL || head->next == NULL) return head;
        
        Node* zero = new Node(-1);
        Node* one = new Node(-1);
        Node* two = new Node(-1);
        
        Node* zeroTraversal = zero;
        Node* oneTraversal = one;
        Node* twoTraversal = two;
        
        Node* temp = head;
        
        while (temp != NULL) {
            if (temp->data == 0) {
                zeroTraversal->next = temp;
                zeroTraversal = zeroTraversal->next;
            } else if (temp->data == 1) {
                oneTraversal->next = temp;
                oneTraversal = oneTraversal->next;
            } else {
                twoTraversal->next = temp;
                twoTraversal = twoTraversal->next;
            }
            temp = temp->next;
        }
        twoTraversal->next = NULL;
        oneTraversal->next = two->next;
        zeroTraversal->next = one->next;
        Node* sortedHead = zero->next;
        delete zero;
        delete one;
        delete two;
        
        return sortedHead;
        
    }
};