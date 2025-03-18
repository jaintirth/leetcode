class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int n=cost.size();
        int totalGas=0;
        int totalCost=0;
        int currGas=0;
        int index=0;
        for(int i=0;i<n;i++)
        {
            totalGas+=gas[i];
            totalCost+=cost[i];
            
            currGas+=gas[i]-cost[i];
            if(currGas<0)
            {
                currGas=0;
                index=i+1;
            }
        }
        return (totalGas<totalCost ? -1:index);
    }
};
