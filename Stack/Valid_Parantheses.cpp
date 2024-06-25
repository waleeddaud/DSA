#include<iostream>
#include<stack>
using namespace std;
 bool isValid(string s) {
        stack<char> check;
        if(s[0] == ')' ||s[0] =='}'||s[0]==']') return false;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(' || s[i] == '{'||s[i] == '[')
                check.push(s[i]);

            else if(!check.empty()){
                if((check.top() == '(' && s[i]==')')||(check.top() == '{' && s[i]=='}')||(check.top() == '[' && s[i]==']'))
                    check.pop();
                else if(check.top()!=s[i])
                    return 0;
            }else return 0;
        }
        if(check.empty())   return 1;
        return 0;
    }
