//Reverse a Stack using recursion
//Geeks for Geeks Practice
#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int> &st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int val = st.top();
    st.pop();
    insert(st,x);
    st.push(val);
}
    
    void Reverse(stack<int> &St){
        if(St.empty())  return;
        int val = St.top();
        St.pop();
        Reverse(St);
        insert(St,val);
    }
