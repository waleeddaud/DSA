//Leet Code Hard problem reverse k groups in linked list
//Problem 25

/*
In this problem we first reverse k elements in linked list and then recursively reverse other 
k groups in that linked list and at the end return prev(which is the head of modified linked list)

*/

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
    int totalNodes(ListNode* head){
        ListNode* curr = head;
        int count =0;
        while(curr!=nullptr){
            curr = curr->next;
            count++;
        }
        return count;
    }
    ListNode* answer(ListNode* head, int k){
        ListNode* prev = nullptr;
        ListNode* curr = head ;
        ListNode* forward = nullptr;
        //base case
        if(curr == nullptr ){
            return nullptr;
        }
        //if less than k nodes are left then attach them a s it is 
        int count=0;
        while(curr!=nullptr){
            curr = curr->next;
            count++;
        }
        if(count<k){
            return head;
        }

        curr = head;
        //iteratively reverse
        for(int i=0;i<k && curr!=nullptr;i++){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward; 
        }
        if(curr!= nullptr)
            head -> next = answer(forward,k);
        return prev;

    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
            return answer(head,k);
        
    }
};