/*
#include<iostream>
using namespace std;
int main(){
    //declare
    int number[15];
    //accessing an array
    cout<<"value at 20 index "<<number[21]<<endl;
    //initialising an array
    int second[3]={5,7,11};
    cout<<"value at 2 index "<<second[2]<<endl;
    return 0;
}
*/

#include<iostream>
using namespace std;

int main(){
    //initialising all locations with 1 {not possible with below code}
    int fourth[10]={1};
    int n=10;
    cout<<"printing the array"<<endl;
    for (int i=0;i<n;i++){
        cout<<fourth[i]<<" ";
    }
    return 0;
}
