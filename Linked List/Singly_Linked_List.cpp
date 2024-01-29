#include<iostream>
using namespace std;
//A node contains data and a pointer to store the address off next node
class node{
    public:
    int data;
    node *next;
    //We make a parameterized contructor in order to store some data in it
    node(int d){
        this->data = d;
        this->next = NULL;
    }  
};
//We make a function insert at head to insert element at the start of Linked List
//The complexity to insert at head is O(1)
void insertAtHead(node * &head,int d){
    //create a new node for new data
    node *temp = new node(d);
    temp->next = head;
    head = temp;
    
}
//We make a function to insert element at the end of Linked List
void insertAtEnd(node *head, int data){
    node *temp = head;
    node *insert = new node(data);
    node *curr;
    while(temp !=NULL){
        curr = temp;
        temp = temp->next;
    }
    curr->next = insert;

} 
//Insert Element at any position in Singly Linked List
void insertAtPosition(node* &head, int data, int position){
    //We assume that the position of head/start of linked list is at 1 position
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    node *insert = new node(data);
    node * temp = head;
    int count = 1;
    //position - 1 because we have to insert element at that position
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    insert ->next = temp->next;
    temp->next = insert;


    
}

//Now we will see how can we delete a node at a certain position
void deleteNode(node *&head,int position){
    if(position == 1){
        node *temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        node *prev = NULL;
        node *curr = head;
        int count = 1;
        while(count<position){
            prev = curr;
            curr = curr->next ;
            count++; 
        }
        prev -> next = curr -> next;
        curr->next = NULL;
        delete curr;

    }
}

//Traversal Of a Linked List
void print(node * head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

int main()
{
    node* one = new node(10);
    //cout<< one->data<<" "<<one->next;
    node*head = one;
    print(one);
    insertAtHead(head,20);
    print(head);
    insertAtEnd(head,50);
    print(head);
    insertAtPosition(head, 70, 1);
    print(head);
    deleteNode(head,3);
    print(head);
    deleteNode(head,2);
    print(head);
    return 0;
}