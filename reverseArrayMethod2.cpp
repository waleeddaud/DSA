#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int arr[size] = { 4,12,3,88,-3};
    int brr[size];
    /*It puts the reverse of array in a new empty array of the same size*/
    /*j is new array's index and the value of reversed array is obtained by 
    running the loop from reserver direction*/
    int j=0;
    for(int i = size-1; i>=0;i--){
        brr[j]=arr[i];
        j++;
    }

    /*For printing the reversed new array*/
    for(int i=0; i<size; i++){
        cout<< brr[i]<<" ";
    }

}