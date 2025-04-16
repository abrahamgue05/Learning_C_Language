#include <stdio.h>

// --- Function Prototypes ---
void shell_sort(int arr[], int n);
void printArray(int arr[], int n);

int main() {
    // Define the array to be sorted
    int arr[] = {45, 23, 53, 12, 67, 34, 89};
    int n = sizeof(arr) / sizeof(arr[0]);   // Calculate number of elements

    printf("Original array:\n");
    printArray(arr, n);                     // Print array before sorting

    shell_sort(arr, n);                     // Call Shell Sort

    printf("Sorted array (Shell Sort):\n");
    printArray(arr, n);                     // Print array after sorting

    return 0;
}

// --- Function to perform Shell Sort ---
void shell_sort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j = i;

            // Perform gapped insertion sort
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }

            arr[j] = temp;
        }
    }
}

// --- Utility function to print the array ---
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
