//for Directed acyclic graphs
// Linear ordereing of vertices such that for every edge u-v , u appear before v
//Topological sort using BFS (kahn's Algorithm)
//Find this problem on Geeks for Geeks 
#include<stack>
#include<vector>
#include<map>
using namespace std;

#include<queue>
#include<vector>
#include<map>
using namespace std;
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    
	   vector<int> indegree(V, 0);
	   int i, j;
	   for(i=0;i<V;i++){
	       for(j=0;j<adj[i].size();j++){
	            indegree[adj[i][j]] ++; 
	       }
	   }
	   queue<int> q;
	   vector<int> answer;
	   for(i=0;i<V;i++){
	       if(indegree[i] == 0){
	            q.push(i);
	       }
	   }
	   while(!q.empty()){
	       int front = q.front();
	       answer.push_back(front);
	       q.pop();
	       for(i=0; i<adj[front].size();i++){
	           indegree[adj[front][i]] --;
	           if(indegree[adj[front][i]] == 0){
	               q.push(adj[front][i]);
	           }
	       }
	   }
	   return answer;
	   
	}