class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int i: nums){
            map[i]++;
        }

        vector<pair<int,int>> temp(map.begin(),map.end());
        sort(temp.begin(),temp.end(),[](const pair<int,int> &a,const pair<int,int> &b){
            return a.second>b.second;
        });

        vector<int> result;
        int i=0;
        for(auto& pair : temp){
            if(i==k){
                break;
            }
            result.push_back(pair.first);
            i++;
        }
        return result;
    }
};
