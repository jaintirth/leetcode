#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool bipartiteDFS(vector<vector<int>>& graph, int& u, vector<int>& colors, int color){
        colors[u] = color;

        for(int& v:graph[u]){
            if(colors[v] == color){
                return false;
            }
            if(colors[v]==-1){
                if(!bipartiteDFS(graph, v, colors, 1-color)){
                    return false;
                }
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> colors(n, -1);

        for(int i=0; i<n; i++){
            if(colors[i]==-1){
                if(!bipartiteDFS(graph, i, colors, 1)){
                    return false;
                }
            }
        }
        return true;
    }
};