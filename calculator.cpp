//Simple calculator using switch case syntax
#include<iostream>
using namespace std;
int main(){
    float a, b,c;
    cout<<"input the two float or interger values"<<endl;
    cin>>a>>b;
    char op;
    cout<<"Enter an operator (+,-,*,/)"<<endl;
    cin >> op ;
    switch(op){
    case '+':
        c = a+b; 
        cout<<c<<endl;
        break;
    case '-':
        c = a-b;
        cout<<c<<endl;
        break;
    case '*':
        c = a*b;
        cout<<c<<endl;
        break;
    case '/':
        if(b!= 0){
            c = a/b;
            cout<<c<<endl;
        }else{
            cout<<"the division of number by zero is not allowed";
        }
        break;
    default:
        cout<<"enter a valid operator" ;
        break;
    }


    return 0;
}