#include<iostream>
using namespace std;
int pivotInRotatedarray(int arr[], int n){
    int start , end , mid;
    start = 0;
    end = n-1;
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]>=arr[0]){
            start = mid +1;
        }else{
            end =mid-1;
        }
        
    }
    return start;
}
int binarySearch(int arr[], int s, int e ,int key){
    int start, end , mid;
    start = s;
    end = e;
    /*We could have written mid to be (start+ end)/2 but it gives error on maximum range*/
    mid = start + (end - start)/2;
    while(start<=end){
        if(key == arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main()

{   
    int key = 2;
    int size =5;
    int arr[size] = {3,4,7,1,2};
    int pivot = pivotInRotatedarray(arr, size);
    if(key >= arr[pivot] && key<= arr[size-1]){
        cout<<binarySearch(arr, pivot, size-1, key)<<endl;
    }else{
        cout<<binarySearch(arr, 0, pivot, key)<<endl;
    }
    return 0;
}