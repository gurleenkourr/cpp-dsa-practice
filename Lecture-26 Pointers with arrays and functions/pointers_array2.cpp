#include<iostream>
using namespace std;
int main(){
    /*
   int a[15]={2,12,6,15,9};
   cout<<a<<endl;
   cout<<*a<<endl;
   cout<<"-->"<<&a<<endl;

   int *ptr=&a[0];
   cout<<ptr<<endl;
   cout<<*ptr<<endl;
   cout<<"-->"<<&ptr<<endl;
   */
  int arr[10];
  //ERROR
  //arr=arr+1;]

  int *ptr=&arr[0];
  cout<<ptr<<endl;
  ptr=ptr+1;
  cout<<ptr<<endl;
}
   