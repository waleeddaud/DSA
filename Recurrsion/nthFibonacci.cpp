#include<iostream>
using namespace std;
int fib(int num){
    if(num == 0)    return 0;
    if(num == 1)    return 1;
    return fib(num - 1) + fib(num - 2);
}
int main()
{
    int num;
    cin>>num;
    int ans = fib(num);
    cout<<ans<<endl;
    return 0;
}