class Solution {
public:
    int climbStairs(int n) 
    {
        int resN1 = 1;
        int resN2 = 2;
        int res;
        if(n==1)
        {
            res=resN1;
        }
        else if(n==2)
        {
            res=resN2;
        }
        else
        {
            for(int i=3;i<n+1;i++)
            {
                res=resN2+resN1;
                resN1=resN2;
                resN2=res;
            }
        }
        return res;
    }
};
