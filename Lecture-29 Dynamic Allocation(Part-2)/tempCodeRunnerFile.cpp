#include<iostream>
using namespace std;

int main(){
    //rows and col are diff
    int row;
    cin>>row;
    int col;
    cin>>col;
    //creation of 2d array
    int**arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    //input taking
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}