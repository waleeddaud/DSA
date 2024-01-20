#include<iostream>
using namespace std;
int binarySearch(int *arr, int s, int e ,int key){
    if(s>e) return 0;
    int mid = s+ (e-s)/2;
    if(arr[mid]==key)
        return mid;
    else if(arr[mid]<key)
        return binarySearch(arr,mid+1,e,key);
    else 
        return binarySearch(arr, s,mid-1,key);
}
int main()
{
    int size=7;
    int arr[size] = {1,5,8,12,15,65,100};
    int s=0;int e=size-1;
    int key =15;
    int ans = binarySearch(arr,s,e,key);
    cout<<ans<<endl;

    return 0;
}