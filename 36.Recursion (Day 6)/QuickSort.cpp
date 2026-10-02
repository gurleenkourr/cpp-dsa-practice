#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //place pivot at right place
    int pivotindex=s+count;
    swap(arr[pivotindex],arr[s]);

    //left right part check krne 
    int i=s , j=e;

    while(i< pivotindex && j> pivotindex){
        while(arr[i]<= pivot){
            i++;
        }
        while(arr[j]>= pivot){
            j--;
        }
        if(i< pivotindex && j> pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;

}
void quicksort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
    //partition
    int p=partition(arr,s,e);

    //left array sort krna hai RECURSIVE CALL
    quicksort(arr,s,p-1);

    //right array sort krna hai
    quicksort(arr,p+1,e);
}
int main(){
    int arr[15]={3,1,4,5,2,45,12,9,6,8,74,18,61,41,21};
    int n=15;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}