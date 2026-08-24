#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    vector<int> a(5,1);
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    vector<int>last(a);
     cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
}