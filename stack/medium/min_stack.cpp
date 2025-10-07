#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> st;
    stack<int> minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(!minStack.empty() && minStack.top()>=val)
        {
            minStack.push(val);
        }
        if(minStack.empty()){
            minStack.push(st.top());
        }
    }
    
    void pop() {
        int val = st.top();
        st.pop();
        if(val==getMin()){
            minStack.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */