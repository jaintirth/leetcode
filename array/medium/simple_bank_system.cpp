#include <bits/stdc++.h>
using namespace std;

class Bank {
public:

    vector<long long> balanceArr;

    Bank(vector<long long>& balance) {
        balanceArr =  balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
        int n = balanceArr.size();
        if(account1<1 || account1>n || account2<1 || account2>n){
            return false;
        }
        int index1 = account1-1;
        int index2 = account2-1;
        if(money > balanceArr[index1]){
            return false;
        }
        balanceArr[index1] -= money;
        balanceArr[index2] += money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        int n = balanceArr.size();
        if(account<1 || account>n){
            return false;
        }
        int index = account - 1;
        balanceArr[index] += money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        int n = balanceArr.size();
        if(account<1 || account>n){
            return false;
        }
        int index = account-1;
        if(money > balanceArr[index]){
            return false;
        }
        balanceArr[index] -= money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */