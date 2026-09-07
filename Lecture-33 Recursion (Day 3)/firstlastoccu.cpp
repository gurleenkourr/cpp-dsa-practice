#include<iostream>
using namespace std;

// First Occurrence
int firstOccurrence(int arr[], int start, int end, int key, int ans) {

    // Base case
    if(start > end) {
        return ans;
    }

    int mid = start + (end - start) / 2;

    if(arr[mid] == key) {
        ans = mid;
        // Search on left side for an earlier occurrence
        return firstOccurrence(arr, start, mid - 1, key, ans);
    }
    else if(arr[mid] < key) {
        // Go right
        return firstOccurrence(arr, mid + 1, end, key, ans);
    }
    else {
        // Go left
        return firstOccurrence(arr, start, mid - 1, key, ans);
    }
}


// Last Occurrence
int lastOccurrence(int arr[], int start, int end, int key, int ans) {

    // Base case
    if(start > end) {
        return ans;
    }

    int mid = start + (end - start) / 2;

    if(arr[mid] == key) {
        ans = mid;
        // Search on right side for a later occurrence
        return lastOccurrence(arr, mid + 1, end, key, ans);
    }
    else if(arr[mid] < key) {
        // Go right
        return lastOccurrence(arr, mid + 1, end, key, ans);
    }
    else {
        // Go left
        return lastOccurrence(arr, start, mid - 1, key, ans);
    }
}


int main() {

    int even[5] = {1, 2, 3, 3, 5};

    cout << "First occurrence of 3 is at index "
         << firstOccurrence(even, 0, 4, 3, -1) << endl;

    cout << "Last occurrence of 3 is at index "
         << lastOccurrence(even, 0, 4, 3, -1) << endl;

    return 0;
}