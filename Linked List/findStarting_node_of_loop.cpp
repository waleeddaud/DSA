//LeetCode Linked List Cycle II
//Find starting node of linked list loop if any
//O(n) time with constant space
// Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
  };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr) return nullptr;
        //First Apply Floyd's cycle detection 
        //And find point of intersection
        ListNode* fast = head;
        ListNode* slow = head;
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
};