/**
 * Merge k sorted linked lists
 * Leetcode Hard
 * 
 * 
 * Definition for singly-linked list.
 */
    #define NULL nullptr
    #include<vector>

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
    ListNode* merge(ListNode* one, ListNode* two){
        if(one==NULL)   return two;
        if(two==NULL)   return one;

        ListNode* answer = NULL;
        ListNode* temp = NULL;

        if(one->val <two->val){
            answer = one;
            one = one -> next;
        }else{
            answer = two;
            two = two->next;
        }
        temp = answer;
        
        while(two!=NULL && one!=NULL){
            if(one->val <two->val){
                temp->next = one;
                one = one -> next;
            }else{
                temp->next = two;
                two = two->next;
            }   
            temp = temp->next;
        }
        while(one!=NULL){
            temp->next = one ;
            one = one ->next;
            temp= temp->next;
        }
        while(two!=NULL){
            temp -> next = two;
            two = two-> next;
            temp= temp-> next;
        }
        
        return answer;

    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size()==0)    return NULL;
        if (lists.size()==1)    return lists[0];
        ListNode *answer = lists[0];
        for(int i=1;i<lists.size();i++){
            answer = merge(answer,lists[i]);
        }
        return answer;

    }
};