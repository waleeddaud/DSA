#include<iostream>
using namespace std;
bool search(int arr[], int n, int key){
    for(int i=0 ; i<n ; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]= {2,3,4,1,-6,88,23,5,0,-1};
    cout<<"Enter the key: ";
    int key;
    cin>> key;
    //Find whether key is present in array or not
    cout<<boolalpha<< search(arr, 10,key);
    return 0;
}