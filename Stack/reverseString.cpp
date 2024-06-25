#include<iostream>
using namespace std;
#include<stack>
void reverseString(string &one ){
    stack<char> check ;
    for(int i=0;i<one.length();i++){
    check.push(one[i]);
    }
    while(!check.empty()){
        cout<< check.top();
        check.pop();
    }
    cout<<endl;
}
int main()
{
    string one = "string";
    reverseString(one);
    return 0;
}