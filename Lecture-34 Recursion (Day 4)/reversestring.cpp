#include<iostream>
using namespace std;
void reverse(string &name,int i,int j){
    //base caase
    if(i>j){
        return;
    }
    //processing
    swap(name[i],name[j]);
    i++;
    j--;
    //recursive call
    reverse(name,i,j);
}

int main(){
    string name ="Gurleen";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;

}