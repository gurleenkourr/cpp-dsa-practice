/*
#include<stack>
#include<limits.h>
class SpecialStack {
    stack<int>s;
    int mini=INT_MAX;
    public:
        
    void push(int data) {
        //For first element 
        if(s.empty()){
            s.push(data);
            mini=data;
        }
        else{
            if(data<mini){
                int val=2*data-mini;
                s.push(val);
                mini=data;
            }
            else{
                s.push(data);
            }
        }
    }
    void pop() {
        int curr=s.top();
        if(curr>mini){
            s.pop();
        }
        else{
            int val=2*mini-curr;
            mini=val;
            s.pop();
            
        }
    }
    int top() {
        // Implement the top() function.
        if(s.empty()){
            return -1;
        }
        int curr=s.top();
        if(curr<mini){
            return mini;
        }
        else{
            return curr;
        }
    }
    int getMin() {
        // Implement the getMin() function.
        if(s.empty()){
            return -1;
        }
        return mini;
    }  
};
*/