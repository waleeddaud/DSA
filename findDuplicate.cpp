#include<iostream>
using namespace std;
int main(){
    int i, j;
    const int size=5;
    int arr[size]= {1,2,3,4,3};
    int count = 1;
    for( i =0; i<=size-1; i++){
        for ( j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                cout<<arr[i]<<" comes "<<count<<" times.";
                break;
            }
        }
    }
    
    return 0;
}