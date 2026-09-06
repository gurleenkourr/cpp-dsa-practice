#include<iostream>
using namespace std;
int factorial(int n){
    //BASE CASE
    if(n==0){
        return 1; //return is mandatory in base case
    }

    //RECURSIVE RELATION
    //int smallerproblem=factorial(n-1);
    //int biggerproblem=n*smallerproblem;
    //return =biggerproblem;

    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
    return 0;
}