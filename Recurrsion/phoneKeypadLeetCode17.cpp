#include<iostream>
#include<vector>
using namespace std;
int toNum(char ch){
    return ch - '0';
}
void solve(string input,string output,int index,vector<string>& ans,vector<string> maps){
    int x = toNum(input[index]);
    //maps[x-2];
    if(index>=input.size()){
        ans.push_back(output);
        return;
    }

    for(int i=0;i<maps[x-2].size();i++){
        output.push_back(maps[x-2][i]);
        //cout<<output[i];
        solve(input, output,index+1,ans,maps);
        //after we make possible combination we have to empty the string for the next recursive call 
        output.pop_back();
    }

}
int main()
{
    int index =0;
    string input = "23";
    vector<string> maps = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
    string output = "";
     solve(input,output,index, ans,maps);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }



    return 0;
}