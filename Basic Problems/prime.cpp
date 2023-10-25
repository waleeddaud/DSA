// This piece of code aims to find the prime number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cin>> num;
    bool flag = 0;
    /*the square root is taken to reduce the number of iterations of loop ,improving efficiency */
    for(int i = 2; i<=sqrt(num); i++ ){
        if(num%i==0){
            cout<< num<< " is not a prime number";
            flag= 1;
            break;
        }
    }
    if (flag == 0){
        cout<<num<<" is a prime number";
    }

    return 0;
}