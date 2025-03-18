class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        vector<int> v(2,0);
        unordered_map<int,int> map;
        int n=grid.size();
        int m=n*n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                map[grid[i][j]]++;
            }
        }
        for(int i=1;i<=m;i++)
        {
            auto it=map.find(i);
            if(it==map.end() || map[i]==2)
            {
                if(map[i]==2)
                {
                    v[0]=i;
                }
                else
                {
                    v[1]=i;
                }
            }
        }
        return v;
    }
};
