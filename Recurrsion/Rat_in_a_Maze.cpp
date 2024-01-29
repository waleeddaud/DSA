
//there is some error in this resolve this error later waleed
#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<vector<int>> given,int x, int y,vector<vector<int>> &visited,int n){
    if((x>=0&&x<n)&&(y>=0&&y<n) && visited[x][y]==0 && given[x][y]==1)
        return 1;
    return 0;
}
void solve( vector<vector<int>> given,int n,int x, int y,vector<vector<int>> &visited,string path,vector<string>& ans){
    //Base Case
    if(x==n-1&& y==n-1){
        ans.push_back(path);
        return ;
    }
    //Now the rat can move down, left , right, up
    //We will move the rat recursively
    visited[x][y] = 1;
    //Down
    int newx =x+1 ,newy = y;
    if(isPossible(given,newx,newy,visited,n)){
        path.push_back('D');
        solve(given,n,newx,newy,visited,path,ans);
        path.pop_back();
    }

    //left
     newx =x ;newy = y-1;
    if(isPossible(given,newx,newy,visited,n)){
        path.push_back('D');
        solve(given,n,newx,newy,visited,path,ans);
        path.pop_back();
    }

    //right
     newx =x ;newy = y+1;
    if(isPossible(given,newx,newy,visited,n)){
        path.push_back('D');
        solve(given,n,newx,newy,visited,path,ans);
        path.pop_back();
    }

    //up
     newx =x-1 ;newy = y;
    if(isPossible(given,newx,newy,visited,n)){
        path.push_back('D');
        solve(given,n,newx,newy,visited,path,ans);
        path.pop_back();
    }
    visited[x][y] = 0;
}
int main()
{
    //Order of matrix n*n
    int n; 
    vector<vector<int>> given = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}};
    vector<vector<int>> visited = given;
    //initialize the visited 2d array with 0
    for(int i=0;i<visited.size();i++){
        for(int j=0;j<visited[i].size();j++){
            visited[i][j] = 0;
        }
    }
    int srcx =0;
    int srcy =0;
    string path ="";
    vector<string> ans ;
    solve(given,n,srcx,srcy,visited,path,ans);
    for(int k=0;k<ans.size();k++){
        cout<<ans[k];
    }
    
    return 0;
}