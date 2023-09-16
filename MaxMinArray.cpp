#include<iostream>
#include<limits.h>
using namespace std;
//This code aims to find the maximum and minimum in array
int maximum(int arr[], int size){
    int max = INT_MIN;
    /*INT_min assigns the minimum value to max variable and we then compare the 
    values of our array with max ,that in the end gives us maximum in the array*/
    for(int i =0; i<size;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }return max;
}
int minimum(int arr[], int size){
    int min = INT_MAX;
    /*similarly min works the same as max */
    for(int i =0; i<size;i++){
        if(arr[i]<min){
            min= arr[i];
        }
    }return min;
}
int main(){
    int size;
    cout<<"enter a size of array :\n";
    cin>>size;
    int arr[100];
    cout<<"enter the values of array: \n";
    for(int i=0;i<size;i++){
        
        cin>> arr[i];
    }

    cout<< "Minimum is: "<<minimum(arr,size)<<endl;
    cout<< "Maximum is: "<<maximum(arr,size)<<endl;
    return 0;
}