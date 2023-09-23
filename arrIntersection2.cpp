/*This code finds intersection of arrays using optimized code*/
#include<iostream>
using namespace std;
int main(){
    int i=0, j=0;
    const int m = 5;
    const int n = 4;
    int arr1[m]={2,3,4,6,8};
    int arr2[n]={1,4,5,7};
    while(i<m &&j<n){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i];
            i++;
            j++;
        }else if(arr1[i]<arr2[j]){
            i++;
        }else{
            j++;
        }
    }
     
    return 0;
}