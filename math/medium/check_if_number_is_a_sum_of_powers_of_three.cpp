class Solution {
public:
    bool checkPowersOfThree(int n) 
    {  
        bool result=true;
        int power;
        int prevPower=0;
        while(n!=0)
        {
            power=1;
            while(power<n)
            {
                power*=3;
                if(power>n)
                {
                    power/=3;
                    break;
                }
            }
            if(power==prevPower)
            {
                result=false;
                break;
            }
            prevPower=power;
            n=n-power;
        }
        return result;
    }
};
