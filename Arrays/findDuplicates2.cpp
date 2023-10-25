#include<iostream>
using namespace std;
int main(){
    const int size= 5;
    int arr[size] = {1,2,3,4,3};
    int ans =0 ;
    for(int i= 0;i<size;i++){
        ans = ans^arr[i];
    }
    for(int i=1;i<size;i++){
        ans =ans^i;
    }
    cout<<"the numbers repeated twice are : "<< ans<<endl;
    return 0;
}