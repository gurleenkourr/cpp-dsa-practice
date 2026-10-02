#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>q;
    q.push("gurleen");
    q.push("kaur");
    q.push("dhunna");

    cout<<"first element "<<q.front()<<endl;
    q.pop();
    cout<<"first element "<<q.front()<<endl;

    cout<<"size " <<q.size()<<endl;

}