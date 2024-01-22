#include<iostream>
using namespace std;
void reverse(string one,int i){
    if(one[i]==0)
        return;
    reverse(one,i+1);
    cout<<one[i]<<" ";
    
}
int main()
{
    string one = "babbar";
    int i=0;
    reverse(one,i);
    return 0;
}