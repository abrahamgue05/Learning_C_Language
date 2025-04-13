#include <stdio.h>    // Standard input/output library for printf
#include <stdlib.h>   // Library for memory allocation (malloc, calloc, free)

// Function prototypes (declarations)
void countingSort(int arr[], int n);     // Sorting function
void printArray(int arr[], int n);       // Function to print the array
int findMax(int arr[], int n);           // Helper function to find the max value

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};                // Input array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]);            // Calculate number of elements in array

    printf("Original array: ");
    printArray(arr, n);                               // Print array before sorting

    countingSort(arr, n);                             // Call Counting Sort

    printf("Sorted array:   ");
    printArray(arr, n);                               // Print sorted array

    return 0;                                          // Exit program
}

// Function to find the maximum value in the array
int findMax(int arr[], int n) {
    int max = arr[0];                                 // Assume first element is the max
    for(int i = 1; i < n; i++) {                       // Loop through rest of array
        if(arr[i] > max)                               // If a bigger value is found
            max = arr[i];                              // Update max
    }
    return max;                                        // Return the maximum value
}

// Counting Sort function
void countingSort(int arr[], int n) {
    int i;
    int max = findMax(arr, n);                         // Find the max value to determine range

    // Allocate and initialize the count array to 0
    int* count = (int*)calloc(max + 1, sizeof(int));   // calloc initializes to 0

    // Count the frequency of each element
    for(i = 0; i < n; i++) {
        count[arr[i]]++;                               // Increment count at index arr[i]
    }

    // Reconstruct the sorted array using the count array
    int index = 0;                                     // Index for placing sorted values back
    for(i = 0; i <= max; i++) {
        while(count[i] > 0) {                          // Place each number as many times as it occurred
            arr[index++] = i;
            count[i]--;
        }
    }

    free(count);                                       // Free the memory allocated for count array
}

// Utility function to print the array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)                         // Loop through array
        printf("%d ", arr[i]);                         // Print each element
    printf("\n");                                      // New line after printing array
}
