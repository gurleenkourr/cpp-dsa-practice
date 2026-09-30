#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getage(){
        return age;
    }
    void setweight(int w){
        this->weight=w;
    }
};
/*
//MODE OF INHERITANCE-->Public
class Male:public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
};
*/
//MODE-->Protected
class Male:protected Human{
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
    int getHeight(){
        return height;
    }
};

int main(){
    Male m1;
    cout<<m1.getHeight()<<endl;

    /*
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.height<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.color<<endl;
    object1.sleep();
    object1.setweight(84);
    cout<<object1.weight<<endl;
    */
}