#include<iostream>
using namespace std;

void sortArray(int *arr, int n) {
    // Base case
    if(n <= 1) {
        return;
    }
    // Sort first n-1 elements
    sortArray(arr, n-1);
    // Insert the last element at its correct position
    int last = arr[n-1];
    int j = n-2;

    while(j >= 0 && arr[j] > last) {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}
int main() {
    int arr[5] = {10, 1, 7, 4, 8};
    sortArray(arr, 5);
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}

