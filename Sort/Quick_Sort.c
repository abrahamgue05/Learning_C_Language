#include <stdio.h>

// Function to partition the array around a pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the last element as pivot
    int i = low - 1;       // Index of the smaller element
    int temp;

    // Traverse through the array and rearrange elements
    for (int j = low; j < high; j++) {
        // If current element is smaller than pivot
        if (arr[j] < pivot) {
            i++; // Move index of smaller element
            // Swap arr[i] and arr[j]
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap the pivot element with the element at i + 1
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    // Return the partition index
    return i + 1;
}

// Recursive Quick Sort function
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get pivot index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

int main() {
    // Define the array to be sorted
    int arr[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(arr) / sizeof(arr[0]); // Get number of elements

    int i;

    // Print the original array
    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform Quick Sort
    quick_sort(arr, 0, n - 1);

    // Print the sorted array
    printf("Sorted array (Quick Sort):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
