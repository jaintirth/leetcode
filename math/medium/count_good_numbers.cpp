class Solution {
public:

    long long mod=1e9+7;
    long long myPow(int x,long long n){
        if(n==1){
            return x;
        }
        if(n==0){
            return 1;
        }
        bool isEven = true;
        if(n%2){
            isEven = false;
        }
        long long half = myPow(x,n/2);
        long long res=(half*half)%mod;
        if(!isEven){
            res = (res*x)%mod;
        }
        return res;
    }

    int countGoodNumbers(long long n) {
        long long oddIndices = n/2;
        long long evenIndices = (n+1)/2;
        long long oddWays = myPow(4,oddIndices);
        long long evenWays = myPow(5,evenIndices);
        return (oddWays*evenWays)%mod;
    }
};
