class Solution {
public:
    int romanToInt(string s) 
    {
        int sum = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='M')
            {
                sum+=1000;
            }
            if(s[i]=='D')
            {
                sum+=500;
            }
            if(s[i]=='C')
            {
                if(s[i+1]=='D')
                {
                    sum+=400;
                    i++;
                }
                else if(s[i+1]=='M')
                {
                    sum+=900;
                    i++;
                }
                else
                {
                    sum+=100;
                }
            }
            if(s[i]=='L')
            {
                sum+=50;
            }
            if(s[i]=='X')
            {
                if(s[i+1]=='L')
                {
                    sum+=40;
                    i++;
                }
                else if(s[i+1]=='C')
                {
                    sum+=90;
                    i++;
                }
                else
                {
                    sum+=10;
                }
            }
            if(s[i]=='V')
            {
                sum+=5;
            }
            if(s[i]=='I')
            {
                if(s[i+1]=='V')
                {
                    sum+=4;
                    i++;
                }
                else if(s[i+1]=='X')
                {
                    sum+=9;
                    i++;
                }
                else
                {
                    sum+=1;
                }
            }
        }
        return sum;
    }

};
