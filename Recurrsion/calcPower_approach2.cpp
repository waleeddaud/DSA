#include<iostream>
using namespace std;
//power using optimized approach
int power(int a, int b){
    if(b==0)    return 1;
    if(b==1)    return a;
    int exp =power(a, b/2);
    if(b%2==0)
// if b is even then expression becomes pow(a,b/2)*pow(a,b/2)
        return exp * exp;
    else 
// if b is odd then expression becomes a*pow(a,b/2)*pow(a,b/2)
        return a*exp *exp;
}

int main()
{
    int a,b;
    cin>>a>>b;
    long int ans = power(a,b);
    cout<<ans;
    return 0;
}