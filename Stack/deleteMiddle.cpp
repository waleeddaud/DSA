#include<iostream>
#include<stack>
using namespace std;

void deleteMiddle(stack<int>& one, int count, int N){
    //delete middle using stack
    //base case
    if(N/2 == count){
        one.pop();
        return;
    }
    int val = one.top();
    one.pop();
    deleteMiddle(one,count+1, N);
    one.push(val);
}
int main()
{
    stack<int> given;
    for(int i=0;i<5;i++){
        given.push(i);
    }
    //push elements
    int N= given.size();int count =0;
    deleteMiddle(given,count, N );
    cout<<given.size();
    cout<<endl;
    while(!given.empty()){
        cout<<given.top();
        given.pop();
    }
    return 0;
}