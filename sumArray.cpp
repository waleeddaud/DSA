#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: \n";
    cin>>size;

    int arr[100];
    cout<<"Enter "<<size<<" values in array :\n";
    for(int i=0 ; i<size;i++){
        cin>>arr[i];
    }
    /*This portion calculates the sum of array*/
    int sum=0;
    for(int i=0 ; i<size; i++){
        sum = sum + arr[i];
    }
    cout<<"The sum of all values of array are: "<<sum;

    return 0;
}