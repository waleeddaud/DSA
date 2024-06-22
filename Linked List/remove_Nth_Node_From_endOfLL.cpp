//Remove Nth Node form End of Linked List
//LeetCode 19 Problem Tag

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr || (head-> next==nullptr))
            return nullptr;
        ListNode* temp = head;
        int len=0;
        while(temp!=nullptr){
            temp = temp->next;
            len++;
        }
        int pos = len - n;
        if(pos == 0) {
            head = head -> next ;
            return head;
        }
        temp = head;
        ListNode* prev = nullptr;
        int count =0;
        while(count != pos){
            prev = temp;
            temp = temp->next;
            count++;
        }
        prev -> next = temp -> next;
        return head;

    }
};