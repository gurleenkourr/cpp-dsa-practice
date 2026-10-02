#include<iostream>
using namespace std;
class A{
    public:
    void func1(){
        cout<<"Inside function 1"<<endl;
    }
};
class D{
    public:
    void func2(){
         cout<<"Inside function 2"<<endl;
    }
};
class B:public A{
    public:
    void func3(){
        cout<<"Inside function 3"<<endl;
    }
};
class C:public A,public D{
    public:
      void func4(){
        cout<<"Inside function 4"<<endl;
    }
};

int main(){

    A obj1;
    obj1.func1();

    D obj4;
    obj4.func2();

    B obj2;
    obj1.func1();
    obj2.func3();

    C obj3;
    obj1.func1();
    obj4.func2();
    obj3.func4();
}