class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int sum=10;
        int n=digits.size();
        if(digits[n-1]+1==10)
        {
            digits[n-1]=0;
            for(int i=n-2;i>=0;i--)
            {
                if(digits[i+1]==0 && sum==10)
                {
                    sum=digits[i]+1;
                    if(sum==10)
                    {
                        digits[i]=0;
                    }
                    else
                    {
                        digits[i]=sum;
                    }
                }
                
            }
        }
        else
        {
            digits[n-1]+=1;
        }
        if(digits[0]==0)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;    
    }
};
