#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void fillBottles(int& numExchange, int& fullBottles, int& emptyBottles)
    {
        fullBottles++;
        emptyBottles-=numExchange;
        numExchange++;
    }
    void drinkBottles(int& fullBottles, int& emptyBottles, int& bottlesDrunk)
    {
        emptyBottles+=fullBottles;
        bottlesDrunk+=fullBottles;
        fullBottles=0;   
    }

    int maxBottlesDrunk(int numBottles, int numExchange) {
        int fullBottles=numBottles;
        int emptyBottles=0;
        int bottlesDrunk=0;
        drinkBottles(fullBottles, emptyBottles, bottlesDrunk);
        while(fullBottles || (numExchange<=emptyBottles))
        {
            if(numExchange<=emptyBottles)
            {
                fillBottles(numExchange, fullBottles, emptyBottles);
            }else{
                drinkBottles(fullBottles, emptyBottles, bottlesDrunk);
            }
        }
        return bottlesDrunk;
        
    }
};