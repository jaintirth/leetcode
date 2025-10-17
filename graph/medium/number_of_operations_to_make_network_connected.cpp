#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> parent;
    vector<int> rank;

    int find(int x){
        if(x==parent[x]){
            return x;
        }
        return parent[x] = find(parent[x]);
    }

    void Union(int a, int b){
        int a_parent = find(a);
        int b_parent = find(b);

        if(rank[a_parent]>rank[b_parent]){
            parent[b_parent] = a_parent;
        }
        if(rank[b_parent]>rank[a_parent]){
            parent[a_parent] = b_parent;
        }
        if(rank[a_parent]==rank[b_parent]){
            parent[b_parent] = a_parent;
        }
        return; 
    }

    int makeConnected(int n, vector<vector<int>>& connections) {
        int components = n;
        int edges = connections.size();
        parent.resize(n);
        rank.resize(n);
        if(edges<components-1){
            return -1;
        }
        for(int i=0;i<n;i++){
            parent[i] = i;
            rank[i] = -1;
        }
        for(int i=0; i<edges; i++){
            int a_parent = find(connections[i][0]);
            int b_parent = find(connections[i][1]);
            if(a_parent!=b_parent){
                Union(a_parent, b_parent);
                components--;
            }
        }
        return components-1;
    }
};