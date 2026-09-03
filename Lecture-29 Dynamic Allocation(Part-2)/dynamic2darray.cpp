#include<iostream>
using namespace std;

int main(){
    //rows and col are same
    int n;
    cin>>n;
    //creation of 2d array
    int**arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }

    //input taking
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    //memory free
    for(int i=0;i<n;i++){
        delete[]arr[i];
    }
    delete[]arr;
}