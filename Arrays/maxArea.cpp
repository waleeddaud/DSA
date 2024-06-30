//maximum area in histogram brute force approach
//Time Complexity O(n^2)
// Leetcode problem
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int largestRectangleArea(vector<int>& heights) {
        int len = heights.size();
        int count,area, i , j , maxArea= 0;
        for(i=0;i<len;i++){
            //for single heights[i] check its left and right to compute max width
            j=0;
            //check left
            count  = 1;
            for(j=i-1;j>=0;j--){
                if( heights[j] >= heights[i])
                    count++;
                else break;
            }
            for(j=i+1;j<len;j++){
                if( heights[j] >= heights[i])
                    count++;
                else break;
            }
            area = heights[i] * count;
            cout<<"Area "<< area<<"Count "<< count<<endl;
            maxArea = max(area, maxArea); 
        }
        return maxArea;
    }
int main()
{
    vector <int> arr = {2,0,2};
    cout<< largestRectangleArea(arr);
    
    return 0;
}