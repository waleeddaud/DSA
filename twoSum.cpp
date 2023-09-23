//CodeStudio problem
/*You are given an array and  var sum =5, you have to find a pair of array values adding to give the sum */
#include<iostream>
using namespace std;
int main(){
    const int size = 5;
    int arr[size] = {7,-3,8,-2,5};
    int ans = 0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            int sum = arr[i]+ arr[j];
            
            if(sum == 5){
                cout<<arr[i]<<" "<<arr[j]<<endl;;
                break;
            }
        }
    }
    return 0;
}