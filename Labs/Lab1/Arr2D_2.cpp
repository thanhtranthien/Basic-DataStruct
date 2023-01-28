#include <iostream>

const int ROWS = 3;
const int COLS = 4;

void inputArray(int arr[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << "Enter element at position [" << i << "][" << j << "]: ";
            std::cin >> arr[i][j];
        }
    }
}

void outputArray(int arr[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void addArray(int arr1[][COLS], int arr2[][COLS], int arr3[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main() {
    // Declare two 2D arrays
    int arr1[ROWS][COLS], arr2[ROWS][COLS], arr3[ROWS][COLS];

    // Input elements for the first array
    std::cout << "Enter elements for the first array: " << std::endl;
    inputArray(arr1);

    // Input elements for the second array
    std::cout << "Enter elements for the second array: " << std::endl;
    inputArray(arr2);

    // Add the elements of the second array to the first array
    addArray(arr1, arr2, arr3);

    // Output the elements of the third array (which now contains the sum of the elements)
    std::cout << "Elements of the third array: " << std::endl;
    outputArray(arr3);

    return 0;
}

