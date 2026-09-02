#include<iostream>
using namespace std;

int main(){
    int arr[10]={2,5,8,7,9};
    cout<<"Address of first block is : "<<arr<<endl;
    cout<<"Address of first block is : "<<&arr[0]<<endl;
    cout<<"Value at first location address : "<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<(*arr)+1<<endl;
    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(3+arr)<<endl;
    cout<<3[arr]<<endl;
    
   //chech bytes stored in array pointer
   cout<<sizeof(arr)<<endl;
   cout<<sizeof(*arr)<<endl;
   cout<<sizeof(&arr)<<endl;

   int *ptr= &arr[0];
   cout<<sizeof(ptr)<<endl;
   cout<<sizeof(*ptr)<<endl;
   cout<<sizeof(&ptr)<<endl;
}