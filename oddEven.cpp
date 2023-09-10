/*this code takes input from user and find if number is even or odd*/
#include<iostream>
using namespace std;
int main(){
     int number;
     cin>>number;
     if(number%2== 0){
        cout<<"The number is even"<< endl;
     }else{
        cout<<"The number is odd"<<endl;
     }
    return 0;
}