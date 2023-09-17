#include<iostream>
using namespace std;
/*This code swaps alternate positions of array using swap function*/
int main(){
    int pos1, pos2;
    const int size = 8;
    int arr[size]={1,3,5,7,9,66,5,99};
    pos1= 0;
    pos2 = 1;
    for(int i=0;i<size; i++){
        /*The use of if statement is such that pos2 does not goes out 
        of bounds causing unexpected behavior for odd values of array*/
        if(pos2<size){
        swap(arr[pos1], arr[pos2]);
        }
        pos1+=2;
        pos2+=2;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}