#include<iostream>
using namespace std;
int Sum(int *arr, int size){
    if(size==0){
        return 0;
    }
    //int sum = arr[0];
    if(size ==1)
        return arr[0];
    return arr[0]+ Sum(arr+1,size-1) ;
}
int main()
{
    int arr[5] = {2, 4 , 10, 6, 10};
    int ans = Sum(arr,5);
    cout<<ans;
    return 0;
}