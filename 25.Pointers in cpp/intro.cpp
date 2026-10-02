#include<iostream>
using namespace std;

int main(){
    int num=5;
    cout<<num<<endl;
    //address of operator -> &
    cout<<"Address of num is: "<<&num<<endl;
    int *ptr=&num;
    cout<<"Address is: "<<ptr<<endl;
    cout<<"value is: "<<*ptr<<endl;

    double d=4.32;
    double *ptr2=&d;
    cout<<"Address is: "<<ptr2<<endl;
    cout<<"value is: "<<*ptr2<<endl;

    //size
    cout<<"size of integer is: "<<sizeof(num)<<endl;
    cout<<"size of pointer is: "<<sizeof(ptr)<<endl;

}