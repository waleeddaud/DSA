//Problem on Geeks for Geeks
#include<iostream>
#include<vector>
#include<queue>
#include<set>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> answer;
        set<int> visited;
        queue<int> q;
        q.push(0);
        visited.insert(0);
        while(!q.empty()){
            int top = q.front();
            q.pop();
            for(int i=0; i<adj[top].size();i++){
                if(visited.find(adj[top][i]) == visited.end()){
                   q.push(adj[top][i]);
                    visited.insert(adj[top][i]);
                }
                
            }
            answer.push_back(top);
        }
        return answer;
        
    }