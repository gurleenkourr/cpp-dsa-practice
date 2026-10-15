/*
void insertAtBottom(stack<int>& myStack, int x) {
    //Base case
    if(myStack.empty()){
        myStack.push(x);
        return;
    }
    int num=myStack.top();
    myStack.pop();

    //Recursive call
    insertAtBottom(myStack,x);
    myStack.push(num);
}
void reverseStack(stack<int> &stack) {
    //Base case
    if(stack.empty()){
        return;
    }

    int num=stack.top();
    stack.pop();

    //Recursive call
    reverseStack(stack);

    //insert at bottom which element is pop above
    insertAtBottom(stack,num);
}
*/