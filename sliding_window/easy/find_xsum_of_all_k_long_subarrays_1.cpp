
class Solution {
public:

    struct Compare{
        bool operator()(const pair<int, int>&a , const pair<int, int>&b) const{
            if(a.second==b.second){
                return a.first<b.first;
            }
            return a.second<b.second;
        }
    };

    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        unordered_map<int, int> freq;
        vector<int> ans(n-k+1);
        int count=0;
        int sum=0;
        int arrSum=0;
        for(int i=0;i<n-k+1;i++){
            priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> pq;
            arrSum=0;
            for(int j=i;j<i+k;j++){
                freq[nums[j]]++;
                arrSum+=nums[j];
            }
            for(auto &p: freq){
                pq.push(p);
            }
            if(pq.size()<x){
                ans[i]=arrSum;
                freq.clear();
                continue;
            }
            count=0;
            sum=0;
            while(count<x){
                auto [num, f] = pq.top();
                sum += num*f;
                pq.pop();
                count++;
            }
            ans[i]=sum;
            freq.clear();
        }
        return ans;   
    }
};