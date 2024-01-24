/*Leetcode find subsets of given set
Our approach is to exclude and include each element of array recursively to get the subsets
of array.
It has time complexity of O(2^n) and space complexity of O(1)*/
#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> given,vector<int> output, int index,vector<vector<int>>& ans){
    if(index>=given.size())
        return;
    //exclude
    solve(given, output, index+1, ans);
    //include
    int answer = given[index];
    output.push_back(answer);
    solve(given, output, index+1,ans);
    ans.push_back(output);

}
void print(vector<vector<int>>& ans){
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
            cout<< ans[i][j] <<" ";
        cout<<"\n";
            
    }
}
int main()
{
    vector<int> given = {1,2,3};
    //To store all subsets of set
    vector<vector<int>> ans; 
    //to store the single subset
    vector<int> output;
    int index =0;
    solve(given , output,index, ans);
    print(ans);


    return 0;
}