class Solution {
public: 

    double calculatePow(double x, int n){
        if(n==0){
            return 1;
        }
        if(n==1){
            return x;
        }
        bool isEven = true;
        if(n%2){
            isEven = false;
        }
        double half = calculatePow(x,n/2);
        double res = half*half;
        if(!isEven){
            res *= x;
        }
        return res;
    }


    double myPow(double x, int n) {
        long long N = n;
        if(N<0){
            x=1/x;
            N=-N;
        }
       return calculatePow(x,N);
    }
};

