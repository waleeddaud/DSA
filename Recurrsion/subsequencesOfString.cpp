//To find subsequeces of string use recurssion
#include<iostream>
#include<vector>
using namespace std;
void solve(string given,string output, int index,vector<string>& ans){
    if(index>=given.size()){
        if(!output.empty())
            ans.push_back(output);
        return;
    }
    //exclude
    solve(given, output, index+1, ans);
    //include
    char answer = given[index];
    output.push_back(answer);
    solve(given, output, index+1,ans);

}
void print(vector<string>& ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        cout<<"\n";
            
    }
}
int main()
{
    string given = "abcd";
    //to store the subsequences
    string output = "";
    //To store all subsets of set
    vector<string> ans; 
    int index =0;
    solve(given , output,index, ans);
    print(ans);


    return 0;
}