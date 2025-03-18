#include<stack>
class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> stack;
        bool k=false;
        int n=s.size();
        int i=0;
        while(i<n)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                stack.push(s[i]);
                k=false;
            }
            else if(s[i]==')')
            {
                if(!stack.empty())
                {
                    if(stack.top()=='(')
                    {
                        stack.pop();
                        k = true;
                    }
                    else
                    {
                        k=false;
                        break;
                    }
                }
                else
                {
                    k=false;
                    break;
                }
            }
            else if(s[i]=='}')
            {
                if(!stack.empty())
                {
                    if(stack.top()=='{')
                    {
                        stack.pop();
                        k = true;
                    }
                    else
                    {
                        k=false;
                        break;
                    }
                }
                else
                {
                    k=false;
                    break;
                }

            }
            else if(s[i]==']')
            {
                if(!stack.empty())
                {
                    if(stack.top()=='[')
                    {
                        stack.pop();
                        k = true;
                    }
                    else
                    {
                        k=false;
                        break;
                    }
                }
                else
                {
                    k=false;
                    break;
                }
            }
            i++;
        }
        if(!stack.empty())
        {
            k=false;
        }
        return k;
    }
};
