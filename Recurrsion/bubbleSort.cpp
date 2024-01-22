#include<iostream>
using namespace std;
void print(int *arr,int n){
   // n = arr.size()-1;
    for(auto i=0;i<n;i++)
        cout<<arr[i] <<" ";
        cout<<endl;
}
void sort(int *arr, int n){
    if(n==0 || n==1)    return ;
    for(int i=0;i<n-1;i++)
        if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    sort (arr, n-1);
    print(arr,n);
    
}
int main()
{
    int arr[5] = {5,4 ,3 ,2, 1};
    sort(arr,5);
    print(arr, 5);
    return 0;

}