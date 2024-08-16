//Detect a cycle in Directed Graph
//Problem on Geeks for geeks
//Using the kahn algothim
//After processing if the count is equal to total no of nodes then no cycle , else there is a  cycle
#include<queue>
#include<vector>
#include<map>
using namespace std;
bool isCyclic(int V, vector<int> adj[]) {
    // code here
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
    int count =0;
    while(!q.empty()){
        int front = q.front();
        answer.push_back(front);
        q.pop();
        count ++;
        for(i=0; i<adj[front].size();i++){
            indegree[adj[front][i]] --;
            if(indegree[adj[front][i]] == 0){
                q.push(adj[front][i]);
            }
        }
    }
    return count!=V;
}
