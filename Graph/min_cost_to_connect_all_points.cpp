//Prims Algorithm to find minimum spanning tree
//LEetcode Problem
#include<iostream>
#include<iomanip>
#include<limits.h>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#include<set>
using namespace std;

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int V = points.size(), i,j, mini, minIndex,dist,sum;
        vector<int> weights(V,INT_MAX);
        vector<bool> MST(V,0);
        //assume the starting point has minimum weight
        weights[0] = 0;
        for(int i=0;i<V;i++){
            //find edges having minimum weight connected to previod nodes in MST
            mini = INT_MAX;
            for(j=0;j<V;j++){
                if(MST[j] == 0 && weights[j] < mini){
                    mini = weights[j];
                    minIndex = j;
                }
            }
            MST[minIndex] = true;
            //Now check all the neighbours of minIndex
            for(j=0;j<V;j++){
                if(j==minIndex){
                    continue;
                }
                dist = abs(points[minIndex][0] - points[j][0]) +abs(points[minIndex][1] - points[j][1] );
                if(MST[j] == 0 && dist < weights[j]){
                    weights[j] = dist;
                }
            }
        }
        sum =0;
        for(i=0;i<V;i++)
            sum += weights[i];
        return sum;
    }
};