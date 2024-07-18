#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data = 0):data(data){
        
        next = nullptr;
    }
    
};
class Queue{
    
    Node* head;
    Node* tail;
    public:
    Queue(){
        head = nullptr;
        tail = nullptr;
    }
    void push(int data){
        if(head == nullptr){
            head = new Node(data);
            tail = head;
        }else{
            Node* temp = new Node(data);
            tail -> next = temp;
            tail = tail -> next;           
        }
    }
    bool empty(){
        if(head == nullptr){
            return true;
        }
        return false;
    }
    int front(){
        if(!empty()){
            return head -> data;
        }
    }
    int back(){
        if(!empty())
            return tail -> data;
    }
    void pop(){
        Node* temp =head;
        head = head-> next;
        delete temp;
    }

};
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(50);
    cout << q.front()<<endl;
    cout << q.back()<<endl;
     q.pop();
    cout << q.front()<<endl;
    return 0;
}