/*
#include <bits/stdc++.h> 
class NStack
{
    int *arr;
    int *top;
    int *next;

    int n,s;
    int freespot;
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n=N;
        s=S;

        arr=new int[s];
        top=new int[n];
        next=new int[s];

        //top intialize
        for(int i=0;i<n;i++){
            top[i]=-1;
        }
        //next intialize
        for(int j=0;j<s;j++){
            next[j]=j+1;
        }
        //update laxt index value to -1
        next[s-1]=-1;
        //freespot intialize 
        freespot=0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        //check for overflow
        if(freespot==-1){
            return false;
        }
        //1. Find index
        int index=freespot;

        //2. Update freespot
        freespot=next[index];

        //3. Insert in array
        arr[index]=x;

        //4. Update next
        next[index]=top[m-1];

        //5. Update top
        top[m-1]=index;

        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        //Check underflow 
        if(top[m-1]==-1){
            return -1;
        }
        //Reverse push code to pop any element in stack fom bottom to top
        int index= top[m-1];

        top[m-1]=next[index];

        next[index]=freespot;
        
        freespot=index;

        return arr[index];
    }
};
*/