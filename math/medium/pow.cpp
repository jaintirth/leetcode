class Solution {
public:
    double myPow(double x, int n) 
    {
        int m=n;
        if(n<0)
        {
            m=-n;
        }
        if(m==1)
        {
            return x;
        }
        else if(m==0)
        {
            return 1;
        }
        else
        {
            double res = x*myPow(x,m-1); 
            if(n>0)
            {
                return res;
            }
            else
            {
                return 1/res;
            }
        }
    }
};
