// This code finds if number is equal to power of two or not 
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num;
    cout<< "enter a number: ";
    cin>> num;
    int ans = 1;
    for(int i =0; i<=30;i++){
        if(ans == num){
           return true;
        }
        if(ans < INT_MAX/2){
// The use of int_max prevents the upper limit of range 2^31 if it gives error
            ans *= 2;
            }
           
    }return false;

    return 0 ;
}