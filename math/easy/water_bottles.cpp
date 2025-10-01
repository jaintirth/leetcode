#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int quotient = numBottles / numExchange;
        int remainder = numBottles % numExchange;
        int sum = quotient+remainder;
        int result=numBottles;
        while(quotient!=0)
        {
            result+=quotient;
            quotient = sum/numExchange;
            remainder = sum%numExchange;
            sum=quotient+remainder;
        }
        return result;
    }
};