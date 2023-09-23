/*This code sorts the array without using the library defined sort function
 and this array consists of elements 0,1,2 in unsorted way*/
#include<iostream>
using namespace std;
int main(){
    const int size = 8;
    int arr[size] = {0,1,0,2,2,1,1,1};
    int left,right;//left indicates 0 and right indicates 1,2
    left =0;
    right = size-1;
    while(left<right){
        while((arr[left] == 0)&&(left<right)){
            left++;
        }
        while((arr[right]==1)||(arr[right]==2)&&(left<right)){
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);

        }
    }
    //now zeros are sorted and we have to sort 1 and 2;
    int mid =0;
    int right1 =size-1;
    while(mid<right1){
        if(arr[mid]==0){
            mid++;
            continue;
            }
        while((arr[mid]==1)&&(mid<right1)){
            mid++;   
        }
        while(arr[right1]==2){right1--;}
        if(mid<right1){
            swap(arr[mid],arr[right1]);  
        }
    }
    
    

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}