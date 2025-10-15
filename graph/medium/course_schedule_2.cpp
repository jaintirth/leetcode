#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    stack<int> st;

    bool dfsTopologicalSort(unordered_map<int, vector<int>>& adj, int& u, vector<bool>& visited, vector<bool>& inRecursion){
        if(inRecursion[u]){
            return true;
        }
        if(visited[u]){
            return false;
        }
        inRecursion[u] = true;
        visited[u] = true;

        for(int& v:adj[u]){
            if(dfsTopologicalSort(adj, v, visited, inRecursion)){
                return true;
            }
        }
        inRecursion[u] = false;
        st.push(u);
        return false;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();
        vector<bool> visited(numCourses, false);
        vector<bool> inRecursion(numCourses, false);
        unordered_map<int, vector<int>> adj;
        for(int i=0;i<n;i++){
            int a = prerequisites[i][0];
            int b = prerequisites[i][1];
            adj[b].push_back(a);
        }
        vector<int> result;
        for(int i=0;i<numCourses;i++){ 
            if(!visited[i]){
                if(dfsTopologicalSort(adj, i, visited, inRecursion)){
                    return {};
                }
            }
        }
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        return result;
    }
};