/*print fibonacci series upto n terms*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>> n;
    int x = 0;
    int y = 1;
    cout<<x<<" ";
    for(int i=0;i<n-1;i++){
        int temp = x+y;
        x = y;
        y = temp;
        cout<<x<<" ";
    }


    return 0;
}