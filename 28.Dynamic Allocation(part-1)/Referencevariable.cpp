#include<iostream>
using namespace std;

//PASS BY VALUE
void update(int n){
    n++;
}
//PASS BY REFERENCE 
void update2(int&n){
    n++;
}
int main(){
    /*
    int i=5;
    //create reference variable
    int &j=i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    */
   int n=5;
   cout<<"Pass by value"<<endl;
   cout<<"Before : "<<n<<endl;
   update(n);
   cout<<"After : "<<n<<endl;

   cout<<"Pass by reference"<<endl;
   cout<<"Before : "<<n<<endl;
   update2(n);
   cout<<"After : "<<n<<endl;
}