#include<iostream>
#include<array>
using namespace std;
main(){
    //basic array
    int basicarray[3]={1,2,3};

    //STL array
    array<int,4>a={4,1,2,6};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    //operations
    cout<<"element at 2nd index-->"<<a.at(2)<<endl;
    cout<<"empty or not -->"<<a.empty()<<endl;
    cout<<"first element-->"<<a.front()<<endl;
    cout<<"last element-->"<<a.back()<<endl;
}