
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
    void Delete(ListNode* temp){
        temp->next = nullptr;
        delete temp;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr || head->next == nullptr){
            return head;
        }
        ListNode* temp = head;
        //int data = head->data;
        while(temp != nullptr){
            if(temp->next!=nullptr && temp->val == temp -> next -> val){
                ListNode* prev = temp->next;
                temp->next = temp->next->next;
                Delete(prev);
                continue;
            }
            temp=temp->next;
        }
        return head;

    }
};