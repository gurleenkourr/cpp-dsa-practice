/*
#include <bits/stdc++.h> 
class CircularQueue{
    int*arr;
    int size;
    int front;
    int rear;

    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size=n;
        arr=new int[size];
        front=rear=-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        //Full conditions
        if((front==0 && rear==size-1) || ( rear==(front-1)%(size-1) )){
            return false;
        }
        else if(front==-1){  //First element insertion
            front=rear=0;
            arr[rear]=value;
        }
        else if(rear==size-1 && front !=0){    //To maintain cyclic nature
            rear=0;
            arr[rear]=value;
        }
        else{
            rear++;
            //push inside queue
            arr[rear]=value;
        }
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        //To check empty
        if(front==-1){
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){ //single element is present
            front=rear=-1;
        }
        else if(front==size-1){
            front=0;  //To maintain cyclic nature
        }
        else{
            front++;
        }
        return ans;
    }
};
*/