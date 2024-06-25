class Solution{
#include<iostream>
#include<stack>
public:
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
    stack<int> insertAtBottom(stack<int> st,int x){
        insert(st,x);
        return st;
    }
};