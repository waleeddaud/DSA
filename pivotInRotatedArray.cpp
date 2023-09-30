/*In a sorted rotated array pivot is the minimum value and we find it using binary search having
time complexity O(log n)*/
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
int main()
{
    int arr[5]= {3,7,8,9,2};
    cout<<"Pivot is : "<<pivotInRotatedarray(arr,5);
return 0;
}