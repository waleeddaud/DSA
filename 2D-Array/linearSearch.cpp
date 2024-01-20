#include<iostream>
using namespace std;
bool linearSearch(int arr[][4] ,int target, int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4];
    int target;
    cout<<"Enter number to find";
    cin >> target ; 
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<linearSearch(arr,target, 3,4);
    return 0;
}