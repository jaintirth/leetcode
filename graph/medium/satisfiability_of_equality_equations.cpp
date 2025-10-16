#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int find(int x, vector<int>& parent){
        if(x==parent[x]){
            return x;
        }
        return parent[x] = find(parent[x], parent);
    }

    void Union(int a, int b, vector<int>& parent, vector<int>& rank){
        int a_parent = find(a, parent);
        int b_parent = find(b, parent);

        if(rank[a_parent]>rank[b_parent]){
            parent[b_parent] = a_parent;
        }
        if(rank[b_parent]>rank[a_parent]){
            parent[a_parent] = b_parent;
        }
        if(rank[a_parent]==rank[b_parent]){
            parent[b_parent] = a_parent;
            rank[a_parent]++;
        }
        return;
    }

    bool equationsPossible(vector<string>& equations) {
        vector<int> parent(26);
        vector<int> rank(26, 0);

        for(int i=0;i<26;i++){
            parent[i] = i;
        }

        for(string& s: equations){
            if(s[1] == '='){
                Union(s[0]-'a', s[3]-'a', parent, rank);
            }
        }

        for(string& s: equations){
            if(s[1] == '!'){
                int u = find(s[0]-'a', parent);
                int v = find(s[3]-'a', parent);
                if(u==v){
                    return false;
                }
            }
        }
        return true;
    }
};