#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("gurleen");
    s.push("kaur");
    s.push("dhunna");

    cout<<"top element "<<s.top()<<endl;

    s.pop();
    cout<<"top element "<<s.top()<<endl;

    cout<<"size of stack"<<s.size()<<endl;

}