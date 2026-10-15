/*
#include <bits/stdc++.h>
void solve(stack<int>& myStack, int x) {
    //Base case
    if(myStack.empty()){
        myStack.push(x);
        return;
    }
    int num=myStack.top();
    myStack.pop();

    //Recursive call
    solve(myStack,x);
    myStack.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,x);
    return myStack;
}
*/