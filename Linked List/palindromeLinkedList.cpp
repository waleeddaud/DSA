//check whether a linked list is circular or not
class Node {
    public:
      int val;
      Node *next;
      Node() : val(0), next(nullptr) {}
      Node(int x) : val(x), next(nullptr) {}
      Node(int x, Node *next) : val(x), next(next) {}
  };
Node* reverseList(Node* head) {
        Node* prev= nullptr;
        Node* curr= head;
        Node* forward= nullptr;
        while(curr!=nullptr){
            forward = curr->next;
            curr->next=prev;
            prev = curr;
            curr = forward;
        }
        return prev;

    }
Node* middle(Node* head){
    //for 2 elements in linked list head is middle
    if(head -> next -> next == nullptr)
        return head;

    Node* fast=head;
    Node* slow=head;
    
    while(fast->next!=nullptr&&fast->next->next!=nullptr){
        fast = fast->next->next;
        slow = slow -> next;
    }
    return slow;
}
bool isPalindrome(Node* head){
    if(head->next == nullptr)   return 1;
    //Step1: find middle of linked list
    Node* temp = head;
    Node* mid = middle(temp);

    //Step2: reverse the list after the middle
    temp = mid->next;
    mid->next =  reverseList(temp);

    //Step3: compare elements from start and mid->next
    Node* head1 = head;
    Node* head2 = temp;

    while (head2!=nullptr)
    {
        if(head1->val != head2->val)
            return 0;
        head1 = head1 -> next;
        head2 = head2 -> next;

    }
    return 1;    
}