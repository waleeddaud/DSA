/*This code shift all the non zeros elements to left as it is required in question
yo shift all the zeros to right while retaining the order*/
#include<iostream>
using namespace std;
void print(int arr[], int n){
    for(int i=0;i< n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
 int arr[7] = {1,4,0,9,0,0,4};
 int i=0;
 for(int j=0;j<7;j++){
        cout<<i<<" "<<j<<endl;
    if(arr[j]!=0){
        swap(arr[j],arr[i]);
        i++;
        print(arr, 7);
    }
 }
return 0;
}