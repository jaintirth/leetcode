class Solution {
public:
    bool isHappy(int n) 
    {
        bool k=false;
        while(n)
        {
            int sum=0;
            while(n!=0)
            {
                int d=n%10;
                sum+=d*d;
                n/=10;
            }
            if(sum==1)
            {
                k=true;
                break;
            }
            else if(sum==4)
            {
                break;
            }
            else
            {
                n=sum;
            }
        }
        return k;    
    }
};
