#include<iostream>
using namespace std;
//Optimized solution in O(n/2) time
class Node{
    public:
    int data;
    Node *next;
    //We make a parameterized contructor in order to store some data in it
    Node(int d){
        this->data = d;
        this->next = nullptr;
    }  
};
Node* middleApproach1(Node* head){
    int length=0;
    int mid;
    Node* temp = head;
    while(temp!=nullptr){
        temp = temp -> next;
        length++;
    }
    mid = length/2;
    temp = head;
    while(mid--){
        temp = temp -> next;
    }
    return temp;
}
Node* middleApproach2(Node* head){
    Node* fast=head->next;
    Node* slow=head;
    while(fast!=nullptr){
        fast = fast->next;
        if(fast!=nullptr){
            fast = fast->next;
        }
        slow = slow -> next;
    }
    return slow;
}
void insertAtHead(Node * &head,int d){
    //create a new Node for new data
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
    
}
void insertAtPosition(Node* &head, int data, int position){
    //We assume that the position of head/start of linked list is at 1 position
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    Node *insert = new Node(data);
    Node * temp = head;
    int count = 1;
    //position - 1 because we have to insert element at that position
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    insert ->next = temp->next;
    temp->next = insert;


    
}
void print(Node * head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

int main()
{
    Node* one = new Node(10);
    insertAtHead(one,20);
    insertAtHead(one,30);
    insertAtHead(one,40);
    insertAtHead(one,50);
    Node* mid = middleApproach2(one);
    print( mid );
    cout<<mid->data<<endl;

    Node * mid1 = middleApproach1(one);
    cout<<mid1->data;


 
    return 0;
}