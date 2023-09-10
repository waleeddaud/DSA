/*difference of product and sum*/
/*this piece of code aims to find the product of digits of num and sun of its digits and subtract them*/
#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        int sum =0;
        int product= 1;
        
        while(n!= 0){
            int y = n%10;
            product *= y;
            sum += y;
            n/= 10;
        }
        int difference = product -  sum;
        cout<<difference;
     
    return 0;
}