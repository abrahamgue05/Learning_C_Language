#include <stdio.h>

// --- Function Prototypes ---
void quick_sort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void printArray(int arr[], int n);

int main() {
    // Define the array to be sorted
    int arr[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(arr) / sizeof(arr[0]);   // Calculate number of elements

    printf("Original array:\n");
    printArray(arr, n);                     // Print array before sorting

    quick_sort(arr, 0, n - 1);              // Call Quick Sort

    printf("Sorted array (Quick Sort):\n");
    printArray(arr, n);                     // Print array after sorting

    return 0;
}

// --- Function to perform Quick Sort recursively ---
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);    // Get partition index

        // Recursively sort elements before and after partition
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

// --- Function to partition the array around a pivot ---
int partition(int arr[], int low, int high) {
    int pivot = arr[high];   // Choose last element as pivot
    int i = low - 1;
    int temp;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            // Swap arr[i] and arr[j]
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap pivot to correct position
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// --- Utility function to print the array ---
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
