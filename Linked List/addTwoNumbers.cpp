/*LeetCode Question
Add two Numbers represented by linked list
Time Complexity O(N+M) 
Space Complexity O(max(N,M))*/

// Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:

    
    void insertAtTail(ListNode* &head, long long int digit){
        ListNode* temp = new ListNode(digit);
        if( head==nullptr )  head = temp;
        else{
            ListNode* move = head;
            while(move->next != nullptr){
                move = move->next;
            }
            move->next = temp;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* ansHead= nullptr;
        int sum ;
        int carry = 0;
        int digit;
        while(l1!=nullptr && l2!=nullptr){
            sum = l1->val + l2 ->val + carry;
            digit = sum%10;
            carry = sum/10;
            insertAtTail(ansHead,digit);
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=nullptr){
            sum = l1->val + carry;
            digit = sum%10;
            carry = sum/10;
            insertAtTail(ansHead,digit);
            l1 = l1->next;
        }
        while(l2!=nullptr){
            sum = l2->val + carry;
            digit = sum%10;
            carry = sum/10;
            insertAtTail(ansHead,digit);
            l2 = l2->next;
        }
        if(carry!=0){
            insertAtTail(ansHead,carry);
        }
        return ansHead;

    }
};