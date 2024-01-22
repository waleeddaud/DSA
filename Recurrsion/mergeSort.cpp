#include<iostream>
#include <vector>
using namespace std;
void merge(int  A[],int start, int mid, int end ){
    int  B[end-start+1];
    int i = start,j=mid+1 , k=start;
    while(i<=mid && j<=end){
        if(A[i]<=A[j]){
            B[k] = A[i];
            k++;
            i++;
        }else {
            B[k] = A[j];
            k++;j++;
        }
    }
    while(i<=mid){
        B[k++] = A[i++];
    }
    while(j<=end){
        B[k++] = A[j++];
    }

    for(i=start;i<=end ;i++){
        A[i] = B[i];
    }
}
void mergeSort(int  *A, int start, int end ){
    if(start >= end) 
        return ;
    int mid = (start + end)/2;
    //divide the given array recurrsively;
    mergeSort(A, start, mid);
    mergeSort(A, mid+1, end);
    //merge the subarrays 
    merge(A, start, mid, end);

}
void print(int  *hell ,  int end){
    for(int i=0;i<= end;i++){
        cout<<hell[i]<<" ";
    }cout<<"\n";
}
int main()
{
    int  A[5] = {2, 9, 13, 4, 5};
    int start =0;
    int end = 4;
    mergeSort(A, start, end);
    print(A ,end );

    return 0;
}