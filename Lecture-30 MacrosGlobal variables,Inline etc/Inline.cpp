#include<iostream>
using namespace std;

inline int getmax(int &a,int &b){
    return (a>b)?a:b;
}
int main(){
    int a=2;
    int b=4;

    int ans=0;
    ans=getmax(a,b);
    cout<<ans<<endl;

    a=a+3;
    b=b+1;
    ans=getmax(a,b);
    cout<<ans<<endl;

}