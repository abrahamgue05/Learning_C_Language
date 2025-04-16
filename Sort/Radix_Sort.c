#include <stdio.h>
#include <stdlib.h>

// --- Function Prototypes ---
void radix_sort(int arr[], int n);
void count_sort(int arr[], int n, int exp);
int getMax(int arr[], int n);
void printArray(int arr[], int n);

int main() {
    // Define the array to be sorted
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);   // Calculate number of elements

    printf("Original array:\n");
    printArray(arr, n);                     // Print array before sorting

    radix_sort(arr, n);                     // Call Radix Sort

    printf("Sorted array (Radix Sort):\n");
    printArray(arr, n);                     // Print array after sorting

    return 0;
}

// --- Function to perform Radix Sort ---
void radix_sort(int arr[], int n) {
    int max = getMax(arr, n);               // Get maximum number

    // Do counting sort for every digit
    for (int exp = 1; max / exp > 0; exp *= 10)
        count_sort(arr, n, exp);
}

// --- Function to do counting sort based on digit at exp ---
void count_sort(int arr[], int n, int exp) {
    int *output = (int *)malloc(n * sizeof(int)); // Output array
    int count[10] = {0};                          // Digit count (0–9)

    // Count digit occurrences at current place (exp)
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Accumulate counts
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build output array (right to left to keep it stable)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy output back to original array
    for (int i = 0; i < n; i++)
        arr[i] = output[i];

    free(output);
}

// --- Utility function to get maximum value in array ---
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// --- Utility function to print the array ---
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
