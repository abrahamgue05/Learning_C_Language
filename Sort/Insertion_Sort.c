#include <stdio.h>

// Function prototypes
void insertionSort(int arr[], int n);
void printArray(int arr[], int n);

int main() {
    int arr[] = {29, 10, 14, 37, 13};                  // Array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]);              // Calculate number of elements

    printf("Original array:\n");
    printArray(arr, n);                                // Print before sorting

    insertionSort(arr, n);                             // Sort the array using Insertion Sort

    printf("Sorted array (Insertion Sort):\n");
    printArray(arr, n);                                // Print after sorting

    return 0;
}

// Insertion Sort function
void insertionSort(int arr[], int n) {
    int i, j, key;

    // Loop over the array starting from the second element
    for (i = 1; i < n; i++) {
        key = arr[i];           // Current element to insert
        j = i - 1;

        // Move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Shift element to the right
            j--;                  // Move to the previous index
        }

        // Insert the key at the correct position
        arr[j + 1] = key;
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);   // Print each element
    }
    printf("\n");                // Line break after array
}
