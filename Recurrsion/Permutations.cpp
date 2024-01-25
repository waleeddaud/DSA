//Permutations
//Leetcode 26
#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> given,vector<vector<int>>& ans,int index){
    //Base Case
    if(index>=given.size()){
        ans.push_back(given);
        return ;
    }
    //Recursive Relation
    for(int i=index;i<given.size();i++){
        swap(given[index],given[i]);
        solve(given, ans, index+1);
        //backtrack to its original state after getting the answer
        swap(given[index], given[i]);
    }

}
void print(vector<vector<int>>& ans){
    for(int i=0;i<ans.size();i++){
        for(int j=0; j<ans[i].size();j++)
            cout<<ans[i][j];
        cout<<"\n";
            
    }
}
int main()
{
    vector<int> given={1,2,3,4};
    vector<vector<int>> ans;
    int index =0 ;
    solve(given,ans, index);
    print(ans);

    return 0;
}