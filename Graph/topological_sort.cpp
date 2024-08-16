//for Directed acyclic graphs
// Linear ordereing of vertices such that for every edge u-v , u appear before v
//Find this problem on Geeks for Geeks 
#include<stack>
#include<vector>
#include<map>
using namespace std;
int dfs(int node, vector<int> adj[], map<int, bool>&visited,stack<int> &topo ){
	        
	        if(!visited[node]){
	            visited[node] = true;
                for(int i=0;i<adj[node].size();i++){
                    if(!visited[adj[node][i]])
                        topo.push(dfs(adj[node][i],adj, visited, topo));
                }      
	        }
	        return node;
	    
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    stack<int> topo;
	    map<int, bool> visited;
	    int node =0;
	    dfs(node, adj, visited , topo );
	    vector<int> answer;
	    while(!topo.empty()){
	        answer.push_back(topo.top());
	        topo.pop();
	    }
	    return answer;
	}