class Solution {
public:
    vector<int> closestPrimes(int left, int right) 
    {
        vector<int> v;
        for(int num=left;num<=right;num++)
        {
            bool isPrime = true;
            for(int i=2;i<=sqrt(num);i++)
            {
                if(num%i==0)
                {
                    isPrime=false;
                    break;
                }
            }
            if(isPrime && num>1)
            {
                v.push_back(num);
            }
        }
        vector<int> res;
        int n=v.size();
        if(n<2) return{-1,-1};
        else if(n==2) return v;
        else
        {
            int index=-1;
            int minDiff=right-left;
            int diff;
            for(int i=0;i<n-1;i++)
            {
                diff=v[i+1]-v[i];
                if(diff<minDiff)
                {
                    minDiff=diff;
                    index=i;
                }
            }
            res.push_back(v[index]);
            res.push_back(v[index+1]);
        }
        return res;
    }
};
