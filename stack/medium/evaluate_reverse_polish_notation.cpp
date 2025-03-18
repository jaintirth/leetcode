class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        int a,b,result;
        string r;
        stack<string> st;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+")
            {
                b=stoi(st.top());
                st.pop();
                a=stoi(st.top());
                st.pop();
                result=a+b;
                r = to_string(result);
                st.push(r);
            }
            else if(tokens[i]=="*")
            {
                b=stoi(st.top());
                st.pop();
                a=stoi(st.top());
                st.pop();
                result=a*b;
                r = to_string(result);
                st.push(r);
            }
            else if(tokens[i]=="-")
            {
                b=stoi(st.top());
                st.pop();
                a=stoi(st.top());
                st.pop();
                result=a-b;
                r = to_string(result);
                st.push(r);
            }
            else if(tokens[i]=="/")
            {
                b=stoi(st.top());
                st.pop();
                a=stoi(st.top());
                st.pop();
                result=a/b;
                r = to_string(result);
                st.push(r);
            }
            else
            {
                st.push(tokens[i]);
            }
        }
        result = stoi(st.top());
        return result;    
    }
};
