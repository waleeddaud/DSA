#include<iostream>
using namespace std;
int binarySearch(int arr[], int size,int key){
    int start, end , mid;
    start = 0;
    end = size-1;
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
int main(){
    const int size = 5;
    int arr[size] = {1,6,7,9,13};

    cout<<"The index of matched value is: "<<binarySearch( arr,size, 7)<<endl;

    return 0;
}