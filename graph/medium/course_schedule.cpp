#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isCycleDFS(unordered_map<int, vector<int>>& adj, int& u, vector<bool>& visited, vector<bool>& inRecursion){
        if(inRecursion[u]){
            return true;
        }
        if(visited[u]){
            return false;
        }
        inRecursion[u]=true;
        visited[u]=true;
        for(int v : adj[u]){
            if(isCycleDFS(adj, v, visited, inRecursion)){
                return true;
            }
        }
        inRecursion[u]=false;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();
        unordered_map<int, vector<int>> adj;
        for(int i=0; i<n; i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }

        vector<bool> visited(numCourses, false);
        vector<bool> inRecursion(numCourses, false);

        for(int i=0; i<numCourses; i++){
            if(!visited[i] && isCycleDFS(adj, i, visited, inRecursion)){
                return false;
            }
        }
        return true;
    }
};