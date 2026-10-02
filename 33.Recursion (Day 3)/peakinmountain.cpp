#include<iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int s, int e) {

    // Base case
    if(s == e) {
        return s;
    }

    int mid = s + (e - s) / 2;

    if(arr[mid] < arr[mid + 1]) {
        // Peak is on the right
        return peakIndexInMountainArray(arr, mid + 1, e);
    }
    else {
        // Peak is on the left or at mid
        return peakIndexInMountainArray(arr, s, mid);
    }
}

int main() {

    int arr[4] = {3, 4, 5, 1};

    int ans = peakIndexInMountainArray(arr, 0, 3);

    cout << ans << endl;

    return 0;
}