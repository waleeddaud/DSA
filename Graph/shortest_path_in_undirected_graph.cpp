//Problem on GFG
//Find shortest path undirected graph with unit distance
#include<vector>
#include<map>
#include<queue>
#include<list>
using namespace std;
vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        map<int, list<int>> mp;
        for(auto& edge:edges){
            mp[edge[0]].push_back(edge[1]);
            mp[edge[1]].push_back(edge[0]);
        }
        // code here
        vector<bool> visited(N,0);
        //use bfs to track all the nodes as theedges have weights equal to 1 
        vector<int> parent(N, -1);
        queue<int> q;
        q.push(src);
        visited[src] = 1;
        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(auto& it:mp[front]){
                if(!visited[it]){
                    parent[it] = front;
                    visited[it] = 1;
                    q.push(it);
                }
            }
        }
        vector<int> answer(N);
        for(int i=0; i<N;i++){
            if(i == src){
                answer[i] = 0;
                continue;
            }
            int target = i;
            int count =0;
            while(target != -1){
                // if(parent[target] == -1){
                //     answer[i] = -1; 
                //     break;
                // }
                if(src == target){
                    answer[i] = count ;
                    break;
                }
                count++;
                target = parent[target];
            }
            if(target == -1){
                answer[i] = -1;
            }
        }
        return answer;
    }