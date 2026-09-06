#include<iostream>
using namespace std;
void reachhome(int src,int dest){
    cout<<"source "<< src<<" "<<"destination "<< dest<<endl;
    //base case
    if(src==dest){
        cout<<"Reached home"<<endl;
        return;
    }
    //processing
    src++;
    //recursive call;
    reachhome(src,dest);     //(2,10) then (3,10)and so on
}

int main(){
    int dest=10;
    int src=1;

    cout<<endl;
    reachhome(src,dest);
}