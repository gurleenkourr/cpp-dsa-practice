#include<iostream>
using namespace std;

int main(){
    int i=3;
    int *t=&i;
   /* 
   *t=*t+1;
    cout<<i<<endl;
    cout<<*t<<endl;
    cout<<"before t: "<<t<<endl;
    t=t+1;
    cout<<"after t: "<<t<<endl;
    */
    //subtract
    *t=*t-1;
    cout<<i<<endl;
    cout<<*t<<endl;
}