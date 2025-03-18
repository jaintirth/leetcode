class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int currProfit = 0;
        int n=prices.size();
        int minBuy = prices[0];
        int buy,profit;
        for(int i=0;i<n-1;i++)
        {
            if(prices[i]<minBuy)
            {
                minBuy=prices[i];
            }
            buy=prices[i+1];
            profit=buy-minBuy;
            if(profit>currProfit)
            {
                currProfit=profit;
            }
        }
        return currProfit;
    }
};
