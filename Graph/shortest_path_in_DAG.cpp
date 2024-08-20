//Problem on geeks for geeks
// Shortest path in directed acyclic graph
// USing topological sort,
#include<stack>
#include<map>
#include<list>
#include<vector>
using namespace std;
void dfs(int node,map<int, list<pair<int, int>>>& adj, vector<bool> &visited,stack<int>& topological_sort ){
        if(!visited[node]){
            visited[node] = true;
            for(auto it: adj[node]){
                if(!visited[it.first]){
                    dfs(it.first,adj, visited,topological_sort);
                }
            }
            topological_sort.push(node);
        }
    }
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        //directed weighted graph
        map<int, list<pair<int, int>>> adj;
        for(auto& edge:edges)
            adj[edge[0]].push_back({edge[1], edge[2]});
        //use topological sorting to 
        stack<int> topological_sort;
        vector<bool> visited(N,0);
        for(int i=0;i<N;i++){
            if(!visited[i]){
                dfs(i,adj,visited,topological_sort);
            }
        }
        //after finding topological sort find distances from source till each vertex
        vector<int> dist(N, -1);
        dist[0] = 0;
        while(!topological_sort.empty()){
            int top = topological_sort.top();
            topological_sort.pop();
            if(dist[top] != -1){
                for(auto it:adj[top]){
                    if(dist[it.first] == -1){
                        dist[it.first] = dist[top] + it.second;
                    }
                    else if(dist[it.first] > dist[top] + it.second){
                        dist[it.first] = dist[top] + it.second;
                    }
                }
                
            }
        }
        return dist;
    }