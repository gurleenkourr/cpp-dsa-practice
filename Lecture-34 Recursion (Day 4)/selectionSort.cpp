#include<iostream>
using namespace std;

void sortArray(int arr[],int n,int i){
    //base case
    if(n==0 || n==1){
        return;
    }
    for( i = 0; i < n-1; i++ ) {
        int minIndex = i;
        sortArray(arr,n-1,i+1);
        if(arr[i+1] < arr[ minIndex]){
            minIndex = i+1;
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){
    int arr[5]={6,2,8,4,10};
    sortArray(arr,5,0);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
