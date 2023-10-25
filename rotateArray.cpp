/*This code rotates the array to the key position*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> arr = {1,2,3,4,5};
    int n = arr.size();
    int key = 3;
    vector <int> temp(n) ;
    for(int i=0;i<n;i++){
        temp[(i+key)%n]=arr[i];   
    }
    arr =temp;
    for(int i=0;i<n ; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}