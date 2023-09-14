#include<iostream>
using namespace std;
// This code uses the concepts of recursive functions to calculate the fibonacci sequence at given position and factorial of the given number 

int fibonacci(int n ){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);

}
int factorial(int n){
    if(n<=1){
        return 1;
        }
    return n* factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>> n;
    cout<<"The fibonacci number at position "<<n<<" is "<< fibonacci(n)<<endl;
    cout<<"The factorial of the given number is : "<<factorial(n)<<endl;

    return 0;
}