#include<iostream>
using namespace std;
int fact(int n){
    if(n == 0)  return 1;
    return n*fact(n-1);
}
int main()
{
    int num;
    cin>>num;
    int ans = fact(num);
    cout<<ans<<endl;
    return 0;
}