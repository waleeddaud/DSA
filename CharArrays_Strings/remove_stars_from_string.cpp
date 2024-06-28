//LeetCode 2390 
//Remove stars from string
#include<iostream>
#include<stack>

using namespace std;

    string removeStars(string s) {
        stack<char> sol;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]!= '*')
                sol.push(s[i]);
            if(s[i] == '*' && !sol.empty())
                sol.pop();
        }
        while(!sol.empty()){
            ans.push_back(sol.top());
            sol.pop();
        }
        int start =0;
        int end = ans.length()-1;
        while(start <= end){
            swap(ans[start++], ans[end--]);
        }
        return ans;
    }
int main()
{
 
return 0;
}
