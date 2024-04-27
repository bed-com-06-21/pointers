#include <iostream>

using namespace std;

int main() {
    int var1 var2;

    // Get the dimensions of the array from the user, ensuring they do not exceed 3
    cout << "Enter the number var1 (maximum 3): ";
    cin >> var1;
    if (var1 > 3) {
        cout << "Number of var1 cannot exceed 3. Setting rows to 3." << endl;
        var1= 3;
    }
    cout << "Enter the number of var2 (maximum 3): ";
    cin >> var2;
    if (var2 > 3) {
        cout << "Number of var2 cannot exceed 3. Setting columns to 3." << endl;
        var2 = 3;
    }

    // Dynamically allocate memory for the 2D array
    double **arr = new double*[var1]; // Allocate an array of double pointers

    for (int i = 0; i < var1; ++i) {
        arr[i] = new double[var2]; // Allocate memory for each row
    }

    // Assign values to each element of the array using nested loops
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < var1; ++i) {
        for (int j = 0; j < var2; ++j) {
            cout << "arr"<< i << " " << j << ": ";
            cin >> arr[i][j];
        }
    }

    // Output each value of the array in the console
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < var1; ++i) {
        for (int j = 0; j < var1; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate the memory
    for (int i = 0; i < var1; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}