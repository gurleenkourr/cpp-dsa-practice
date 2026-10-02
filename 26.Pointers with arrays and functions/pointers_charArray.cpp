#include<iostream>
using namespace std;

int main(){
    int arr[5];
    char ch[6]="abcde";

    //print address of 0 index
    cout<<arr<<endl;
    //print entire content 
    cout<<ch<<endl;
    //by pointer
    char *pt=&ch[0];
    cout<<pt<<endl;

    char temp='z';
    char *p=&temp;

    cout<<p<<endl;
    return 0;
}
