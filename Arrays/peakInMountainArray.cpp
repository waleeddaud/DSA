/*In a mountain array, this code finds the peak element by using binary search*/
#include<iostream>
using namespace std;
int peakInMountain(int arr[], int n){
    int start , end , mid ;
    start = 0;
    end = n-1;
    while(start <= end){
        mid = start+ (end - start)/2;
        if((arr[mid]>arr[mid-1])&&(arr[mid]>arr[mid+1])){
            return arr[mid];
        }else if(arr[mid-1]>arr[mid]){
            end = mid -1;
/*to shift the value of mid to left side of array*/
        }else if(arr[mid+1]>arr[mid]){
            start  = mid+1;
/*to shift the value of mid to right side*/
        }
    }
}
int main(){
    int arr[8] = {2,4,19,20,12,11,8,1};
    cout<<peakInMountain(arr, 7)<<endl;

    return 0;
}