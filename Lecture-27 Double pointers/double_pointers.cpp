#include<iostream>
using namespace std;

int main(){
    int i=5;
    int* p=&i;
    int** p2=&p;

    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<&p2<<endl; 
    //want to print value of i
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    //want to print 710 (address of i)
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    //want to print 820
    cout<<&p<<endl;
    cout<<p2<<endl;

}