#include<iostream>
#include<stack>
using namespace std;

void sorted(stack<int> & s, int num){
    if(s.empty()){
        s.push(num);
        return;
    }
    int val = s.top();
    
    if(num>val){
        s.push(num);
    }else{
        s.pop();
        sorted(s, num);
        s.push(val);
    }
    
}
void sort(stack<int> &s){
    if(s.empty())   return;
    int val = s.top();
    s.pop();
    sort(s);
    sorted(s,val);
}
void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main()
{
    stack <int> s;
    s.push(2);
    s.push(1);
    s.push(7);
    s.push(3);
    s.push(2);
    sort(s);
    print(s);
    return 0;
}