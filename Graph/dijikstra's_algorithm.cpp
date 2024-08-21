//Implementation of dijikstra's algorithm
//Available on Geeks for geeks
#include<vector>
#include<queue>
#define INT_MAX 2147483647
using namespace std;
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        priority_queue <pair<int,int> , vector<pair<int, int>> , greater<pair<int, int>>> pq;
        vector<int> dist(V,INT_MAX);
        dist[S]  = 0;
        pq.push({0,S});
        while(!pq.empty()){
            int x = pq.top().first;
            int y = pq.top().second;
            pq.pop();
            for(auto& it: adj[y]){
                if(it[1] + x < dist[it[0]]){
                    dist[it[0]] = it[1] + x;
                    pq.push({dist[it[0]], it[0]});
                }
            }
            
        }
        return dist;
    }
};