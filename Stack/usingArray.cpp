#include<iostream>
using namespace std;
class Stack{
    public:
        int *arr;
        int top;
        //maximum size of stack
        int size;
        Stack(int size){
            this->size= size;
            arr = new int[size];
            top=-1;
        }
        bool isEmpty(){
            if( top != -1)
                return 0;
            return 1;
        }
        void push(int data){
            if(top==size-1){
                top--;
                cout<<"Stack is Full\n";
            }
            else{
                top++;
                arr[top] = data;
            }
        }
        void pop(){
            if(isEmpty()){
                cout<<"Stack is empty\n";
            }
            else{
                top--;
            }
        }
        void topElement(){
            if(!isEmpty()){
                cout<<arr[top]<<" ";
            }else cout<<"Empty Stack\n";
        }

        
};
int main()
{

    Stack s(10);
    s.push(20);
    s.push(300);
    s.topElement();
    s.pop();
    s.topElement();s.pop();
    s.topElement();
    
    return 0;
}