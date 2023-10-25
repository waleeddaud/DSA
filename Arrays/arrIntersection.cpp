#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    const int m = 5;
    const int n = 4;

    int arr1[m]={2,3,4,6,8};
    int arr2[n]={1,4,5,7};
    cout<<"The intersection of arr is: "<<endl;
    for(int i=0;i<m;i++){
        int element = arr1[i];
        for(int j=0;j<n;j++){
            if(element<arr2[j]){
                break;
            }
            //to increase time efficiency of code we check iff arr1[i]<arr2[j],and then break
            if(element == arr2[j]){
                cout<<element<<" ";
                arr2[j]=INT_MAX;
                break;
            }
        }
       
    }
    return 0; 
}