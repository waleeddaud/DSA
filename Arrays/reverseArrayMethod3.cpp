/*This code uses two pointer approach for reversing an array*/
#include<iostream>
#include<vector>

using namespace std;
vector<int> reverse(vector <int> arr){
    int s = 0; 
    int e = arr.size()-1;
    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
    return arr;
    }
void print(vector <int> arr){
    for(auto i:arr){
        cout<< i<<" ";
    }
}
int main()
{
 vector <int> arr;
 arr.push_back(11);
 arr.push_back(7);
 arr.push_back(3);
 arr.push_back(12);
 arr.push_back(8);

 vector <int> ans = reverse(arr);
 print(ans);
return 0;
}