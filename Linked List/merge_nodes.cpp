//LeetCode:  Merge nodes in between zeros (Medium)

  //Definition for singly-linked list.
  #include<iostream>
  #define NULL nullptr 
  using namespace std;
  
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        int digit=0;
        //dummy node -1
        ListNode* ans = new ListNode(-1);
        ListNode* tail = ans;
        while(temp!= NULL){
            if(temp -> val == 0){
                if(digit == 0){
                    temp = temp-> next;
                    continue;
                }
                tail -> next = new ListNode(digit);
                tail = tail-> next;
                digit = 0;
            }
            else{
                digit += temp->val;
            }
            temp = temp -> next;
        }
        return ans-> next;
    }
};

