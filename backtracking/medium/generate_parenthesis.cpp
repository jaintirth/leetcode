    #include <bits/stdc++.h>
    using namespace std;

    class Solution {
    public:

        vector<string> result;
        
        void solve(string& curr, int n, int open, int close){
            if(curr.size() == 2*n){
                result.push_back(curr);
                return;
            }

            // DO , Explore, Undo for (
            if(open<n){
                curr.push_back('(');
                solve(curr, n, open+1, close);
                curr.pop_back();
            }
            
            // DO , Explore, Undo for )
            if(close<open){
                curr.push_back(')');
                solve(curr, n, open, close+1);
                curr.pop_back();
            }
        }

        vector<string> generateParenthesis(int n) {
            int open = 0;
            int close = 0;
            string curr = "";
            solve(curr, n, open, close);
            return result;
        }
    };