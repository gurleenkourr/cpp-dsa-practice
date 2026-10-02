#include<iostream>
using namespace std;

int firstoccurence(int arr[],int n, int key){
    int start=0;
    int end = n -1;
    int ans=-1;

    int mid=start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){//right me jana
            start=mid+1;
        }
        else if(arr[mid]>key){//left me jana
            end=mid-1;
        }

        mid=start + (end-start)/2;

    }
    return ans;
}


int lastoccurence(int arr[],int n, int key){
    int start=0;
    int end = n -1;
    int ans=-1;

    int mid=start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){//right me jana
            start=mid+1;
        }
        else if(arr[mid]>key){//left me jana
            end=mid-1;
        }

        mid=start + (end-start)/2;

    }
    return ans;
}

int main(){
    int even[7]={1,2,3,3,3,3,5};

    cout<<"first occurence of 3 is at index"<<firstoccurence(even,7,3)<<endl;
    cout<<"last occurence of 3 is at index"<<lastoccurence(even,7,3)<<endl;
}