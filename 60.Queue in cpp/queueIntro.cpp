#include<iostream>
#include<queue>
using namespace std;

int main(){
    /*********************DOUBLY ENDED QUEUE*************************/
    deque<int>d;

    d.push_front(12);
    d.push_back(12);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_front();
    
    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_back();
    
    if(d.empty()) {
        cout << "queue is empty" << endl;
    }
    else{
        cout << "queue is not empty " << endl;
    }

    /*        
    //Create Queue
    queue<int>q;

    //-->Push
    q.push(11);
    //-->Front
    cout<<"Front of q is : "<<q.front()<<endl;
    q.push(15);
    cout<<"Front of q is : "<<q.front()<<endl;
    q.push(17);
    cout<<"Front of q is : "<<q.front()<<endl;

    //-->Size
    /* Size before popped 
    cout<<"Size : "<<q.size()<<endl;
    //-->Pop
    q.pop();
    cout<<"Front of q is : "<<q.front()<<endl;
    /* Size after popped   
    cout<<"Size : "<<q.size()<<endl;
    //-->Isempty
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    */
}
