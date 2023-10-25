/*This code is an application of binary search and aims to fins first and last occurence 
of duplicates elements in sorted array and totalumber of occurences of an element in sorted
 arrays*/
#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int start = 0,end= n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(key==arr[mid]){
            ans = mid;
            end = mid -1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key){
    int start = 0,end= n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(key==arr[mid]){
            ans = mid;
            start = mid +1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}
int main(){
    int totalOccurences;
    int size = 8;
    int arr[size] = {1,2,3,3,3,3,3,5};
    cout<<"The first occurence is : "<<firstOcc(arr,size,3)<<endl;
    cout<<"The last occurence is : "<<lastOcc(arr,size,3)<<endl;
    totalOccurences = lastOcc(arr,size,3) - firstOcc(arr,size,3)+ 1;
    cout<< "The total occurences of "<<size<<" are : "<<totalOccurences<<endl;

    return 0;

}