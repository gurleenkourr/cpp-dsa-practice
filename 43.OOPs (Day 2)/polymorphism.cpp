#include<iostream>
using namespace std;
/*
//COMPILE TIME POLYMORPHISM
//Function overloading
class A{
    public:
    void sayHello(){
        cout<<"Hello gurleen"<<endl;
    }
    void sayHello(char name){
        cout<<"Hello gurleen"<<endl;
    }
    int sayHello(string name){
        cout<<"Hello gurleen"<<endl;
        return 1;
    }

};

//Operator overloading
class B {
    public:
    int a;
    int b;

    public: 
    int add() {
        return a+b;
    }

    void operator+ (B &obj) {
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl; 
       cout << "Hello Babbar" << endl;
    }

    void operator() () {
        cout << "main Bracket hu " << this->a << endl;
    }

};
*/

//RUN TIME POLYMORPHISM
class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog:public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){
    Animal obj1;
    obj1.speak();
    Dog obj2;
    obj2.speak();
    /*
    A obj;
    obj.sayHello();
    */

   /*
    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    obj1();
   */
}