#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    // Create array of row pointers
    int** arr = new int*[n];

    // Store size of each row
    int* col = new int[n];

    // Create each row dynamically
    for(int i = 0; i < n; i++) {
        cin >> col[i];
        arr[i] = new int[col[i]];
    }

    // Input
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < col[i]; j++) {
            cin >> arr[i][j];
        }
    }

    // Output
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < col[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for(int i = 0; i < n; i++) {
        delete[] arr[i];
    }

    delete[] arr;
    delete[] col;

    return 0;
}