#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class Human{
    public:
    string color;
    public:
    void speak(){
         cout<<"speaking"<<endl;
    }

};
//MULTIPLE INHERITANCE
class Hybrid:public Animal,public Human{

};

int main(){
    Hybrid h1;
    h1.speak();
    h1.bark();
    cout<<h1.color<<endl;
    cout<<h1.age<<endl;
  
}