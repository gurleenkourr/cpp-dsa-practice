#include<iostream>
using namespace std;

int main(){
    /*int *p=0;
    cout<<*p<<endl;*/

    //two ways to intialize pointer
    int i=5;
    int *q=&i;
    cout<<"Value is: "<<*q<<endl;

    int *p=0;
    p=&i;
    cout<<"Value is: "<<*p<<endl;

}