#include <stdio.h>

int main() {
    // Define the array to be sorted
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    int i, j, minIndex, temp;

    // Print the original array
    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Start Selection Sort
    // Loop through each element except the last
    for (i = 0; i < n - 1; i++) {

        // Assume the current position holds the smallest value
        minIndex = i;

        // Loop through the unsorted part of the array to find the minimum
        for (j = i + 1; j < n; j++) {

            // If a smaller element is found, update the minIndex
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // If a new minimum is found, swap it with the current element
        if (minIndex != i) {
            temp = arr[i];            // Store current element in temp
            arr[i] = arr[minIndex];   // Place the found minimum at current position
            arr[minIndex] = temp;     // Put the original element at the minIndex position
        }
    }

    // Print the sorted array
    printf("Sorted array (Selection Sort):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
