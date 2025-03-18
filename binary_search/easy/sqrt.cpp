class Solution {
public:
    int mySqrt(int x) 
    {
        if(x==0 || x==1)
            return x;
        int l=0;
        int r=x;
        int ans=0;
        while(l<=r)
        {
            long long mid=l+(r-l)/2; 
            long long square=mid*mid;
            if(square==x)
                return mid;
            else if(square<x)
            {
                ans=mid;  //stores last valid integer square root
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return ans;    
    }
};
