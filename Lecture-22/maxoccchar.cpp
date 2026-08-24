#include<iostream>
using namespace std;

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

char getmaxocccharacter(string s){
    int arr[26]={0};
    //create an array of count of characters
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        //lowercase
        int number=0;
        number=ch-'a';
        arr[number]++;
    }
    //find maximum occ character
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return'a'+ans;
}
int main(){
    string s;
    cin>>s;
    cout<<getmaxocccharacter(s)<<endl;
    return 0;
}