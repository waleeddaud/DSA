/*in array of size n= 2m+1(odd) m values are repeated twice there is one 
unique element in array. Find that unique element */
#include<iostream>
using namespace std;
int main(){
    const int size = 9;
    int arr[size] ={2,4,9,4,2,1,55,1,9};
    int eval =0;
    for(int i=0; i<size ; i++){
/*XOR operator gives 0^num equal to num and the XOR of two same number is equal to zero.
Thus it finds the unique element in array */
        eval ^= arr[i];
    }cout<<eval;
    return 0;
}