/*This code implements the insertion sort algorithm*/
//This is stable and adaptible algorithm
//Its time complexity is O(n^2), while its best case complexity is O(n)
//It has constant space complexity O(1)
#include<iostream>
using namespace std;
void readArray (int arr[], int size){
    for(int i=0; i<size; i++){
        cout<< arr[i]<<" ";
    }
}
void insertionSort(int arr[], int size){
    for(int i=1; i<size; i++){
        int temp = arr[i];
        int j= i-1;
        for( ;j>=0; j--){
            if(arr[j]>temp) arr[j+1] = arr[j];
            else    break;
        }
        arr[j+1]= temp;
    }
}
int main()
{   const int size = 5;
    int arr[size] ={23,12,4,5,13};
    insertionSort(arr, size);
    readArray(arr, size);
    return 0;
}