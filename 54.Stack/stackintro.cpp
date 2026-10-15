#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties
    public:
        int * arr;
        int top;
        int size;
    //behaviour
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        if(size-top > 1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }

    }
    int peak(){
        if(top >= 0 && top < size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(41);
    st.push(46);
    //stack will overflow
    //st.push(23);
    
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;

    if(st.isempty()){
        cout<<"stack is empty mere dost"<<endl;
    }
    else{
        cout<<"stack is not empty mere dost"<<endl;
    }

    /*****************************************************************************************/
    /*STL
    //Creation of stack
    stack<int>s;

    //Push operation
    s.push(2);
    s.push(3);
    s.push(5);

    //Pop operation--->Removes top element 
    s.pop();
    cout<<"Top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
         cout<<"stack is not  empty"<<endl; 
    }
    cout<<"Size of stack is "<<s.size()<<endl;
    */
}