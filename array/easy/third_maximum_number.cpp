class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        int k;
        priority_queue<int> pq;
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        k=pq.top();
        pq.pop();
        pq.pop();
        if(!pq.empty())
        {
            k=pq.top();
        }
        return k;
    }
};
