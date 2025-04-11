#include <stdio.h>

int main() {
    // Define the array to be sorted
    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    int i, j, key;

    // Print the original array
    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Start Insertion Sort
    // Begin from the second element (index 1)
    for (i = 1; i < n; i++) {
        key = arr[i];      // Store the current value to be inserted
        j = i - 1;

        // Shift elements of the sorted portion to the right
        // as long as they are greater than the key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Shift element to the right
            j--;                  // Move to the previous element
        }

        // Place the key in its correct sorted position
        arr[j + 1] = key;
    }

    // Print the sorted array
    printf("Sorted array (Insertion Sort):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
