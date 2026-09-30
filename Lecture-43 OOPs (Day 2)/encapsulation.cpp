#include<iostream>
using namespace std;
//ENCAPSULATION--->Wrapping up data members and functions
class student{
    private:
        string name;
        int age;
        int height;
    public:
    int getage(){
        return age;
    }
};
int main(){
    student first;
    cout<<"Everything is fine"<<endl;
}