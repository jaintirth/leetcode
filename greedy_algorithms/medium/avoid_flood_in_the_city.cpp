#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> avoidFlood(vector<int>& rains) {
        int n=rains.size();

        unordered_map<int,int> mp;  //lakeDay
        set<int> st;  //zeroDays
        vector<int> ans(n, 1);

        for(int i=0;i<n;i++){
            int lake=rains[i];

            if(lake==0){
                st.insert(i);  //i th day
            }else{
                ans[i]=-1;

                //also check if this lake contains water if it does we will dry it up
                if(mp.count(lake)){
                    auto it = st.lower_bound(mp[lake]);
                    if(it==st.end()){  //you won't be able to dry this lake
                        return {};
                    }

                    //day on which no rain happend
                    int day=*it;
                    ans[day]=lake;

                    st.erase(it);
                }
                mp[lake]=i; 
            } 
        }
        return ans;
    }
};