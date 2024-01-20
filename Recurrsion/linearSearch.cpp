#include<iostream>
using namespace std;
int Search(int *arr, int size,int key){
    if(size==0){
        return 0;
    }
    //int sum = arr[0];
    if(arr[0]==key)
        return 1;
    return Search(arr+1,size-1,key) ;
}
int main()
{
    int arr[5] = {2, 4 , 10, 6, 10};
    int ans = Search(arr,5,8);
    cout<<ans;
    return 0;
}