#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* prev;
        node* next;
    node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
void display(node*head){
    node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtHead(node * &head,int data){
    node *temp= new node(data);
    temp -> next = head;
    head ->prev = temp ;
    head = temp ;
}
void insertAtEnd(node *head, int data){
    node *temp = head;
    node * previous;
    while (temp != NULL ){
        previous = temp;
        temp = temp -> next ;
    }
    node *d = new node(data);
    previous -> next = d;
    d->prev= previous; 
}


int main()
{
    node *one =new node(5);
    node *head = one;
    display(head);
    insertAtHead(head,20);
    display(head);
    insertAtEnd(head,20);

    
    return 0;
}