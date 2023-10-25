/*Check whether a number is palindrome or not*/
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< "Enter a number: ";
    cin>> num;
    int temp = num;
    int ans  = 0 ;
    while(temp > 0){
        int last = temp %10 ;
        ans = (ans * 10) + last ;
        temp/=10;
    }
    cout<<"Reversed number is : "<<ans<<endl;
    (ans == num)? cout<< "It is a palindrome number"<<endl : cout<<"It is not a palindrome number"<<endl;

    return 0;
}