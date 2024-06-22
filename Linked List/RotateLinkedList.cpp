//Rotate Linked List
//LeetCode Problem

  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:

    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr)
            return head;
        ListNode* temp = head;
        //Find length of LL
        int len=0;
        while(temp!=nullptr){
            temp = temp->next;
            len ++;
        }

        int newPos = k%len ; 
        temp = head;
        ListNode* prev = nullptr;
        for(int i=0;i<newPos;i++){
            while(temp->next!=nullptr){
                prev = temp;
                temp = temp->next;
            }  
            prev -> next = nullptr;
            temp -> next = head;
            head = temp ; 
        }
        return head;
    }
};