class Solution {
public:
    int reverse(int x) 
    {
        string num = to_string(x);
        int digits = num.length()-1;
        string res="";
        if(num[0]!='-'){
            while(digits!=-1){
                res+=num[digits];
                digits--;
            }
        }
        else{
            while(digits!=0){
                res+=num[digits];
                digits--;
            }
            res = "-" + res;
        }
        long long result = stoll(res);
        if(result<=INT_MIN || result>=INT_MAX){
            result=0;
        }
        return result;    
    }
};
