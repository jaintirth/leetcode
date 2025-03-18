class Solution {
public:
    int minimumRecolors(string blocks, int k) 
    {
        int n=blocks.size();
        int m=n-k;
        int count=0;
        int wc=0;
        int minWC=n;
        for(int i=0;i<=m;i++)
        {
            count=1;
            for(int j=i;j<n;j++)
            {
                if(blocks[j]=='W')
                {
                    wc++;
                }
                if(count==k)
                {
                    minWC=min(minWC,wc);
                    wc=0;
                    break;
                }
                count++;
            }
        }
        return minWC;    
    }
};
