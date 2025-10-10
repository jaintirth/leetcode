#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {         //monotonic stack
        stack<int> st;
        int n = temperatures.size();
        vector<int> ans(n, 0);
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            int currentTop = temperatures[st.top()];
            int currentTemp = temperatures[i];
            if(currentTemp<currentTop){
                ans[i] = st.top() - i;
            }
            else{
               while(currentTemp>=currentTop){
                    st.pop();
                    if(st.empty()){
                        break;
                    }
                    currentTop = temperatures[st.top()];
               }
               if(!st.empty()){
                    ans[i] = st.top() - i;
               }
            }
            st.push(i);
        }
        return ans;
    }
};