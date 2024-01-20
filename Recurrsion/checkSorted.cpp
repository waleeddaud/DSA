#include<iostream>
using namespace std;
bool checkSorted(int *arr, int size){
    if(size==0||size==1)
        return 1;
    if(arr[0]>arr[1])
        return 0;
    return checkSorted(arr+1,size-1);
    
}
int main()
{
    int arr[5] = {12, 14 , 15, 25, 20};
    if(checkSorted(arr, 5))
        cout<<"Array is sorted"<<endl;
    else 
        cout<<"Array is not sorted"<<endl;
     
    return 0;
}