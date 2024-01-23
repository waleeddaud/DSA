/*This is the implementation for the quick sort algorithm 
It partition function returns pivot Index and places pivot in the right place by counting
number of elements smaller than pivot and swapiing them.
It has the space complexity O(n) and average time complexity of O(n log(n) ) and worst case complexity 
of O(n^2) */
#include<iostream>
using namespace std;
int partition(int *arr, int start,int end){
    int i, j;
    int  pivot= arr[start];
    int count =0;
    for(i=start; i<= end ;i++)
        if(arr[i]<pivot)    count++;
    swap (arr[start], arr[start+count]);
    int pIndex = start + count;
    i= start;
    j= end;
    
    while(i<pIndex &&j>pIndex){
        while(arr[i]<pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<pIndex && j>pIndex ){
            swap(arr[i++], arr[j--]);
        }
    }

    

 }
void quickSort(int *arr , int start, int end){
    if(start>=end)  
        return ;
    //partition the array to find the pivot index 
    int pIndex = partition(arr, start, end);
    quickSort (arr, start, pIndex-1);
    quickSort (arr, pIndex+1, end);

}
int main()
{
    const int size =10;
    int arr[size] = {10,9,8,7,6,5,4,3,2,1};
    int start =0;
    int end = size -1;
    quickSort(arr,start,end);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    return 0;
}