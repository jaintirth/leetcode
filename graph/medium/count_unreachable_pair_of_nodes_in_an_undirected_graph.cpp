#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void dfs(unordered_map<int, vector<int>>& adj, int u, vector<bool>& visited, long long& Size){

        visited[u] = true;

        Size++;
        for(int& v:adj[u]){
            if(!visited[v]){
                dfs(adj, v, visited, Size);
            }
        }
        return;
    }

    long long countPairs(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> adj;

        for(int i=0;i<edges.size();i++){
            int a = edges[i][0];
            int b = edges[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        vector<bool> visited(n, false);
        long long remainingNodes = n;
        long long result = 0;

        for(int i=0;i<n;i++){
            if(!visited[i]){
                long long Size = 0;
                dfs(adj, i, visited, Size);
                result += (Size)*(remainingNodes - Size);
                remainingNodes -= Size;
            }
        }
        return result;
    }
};