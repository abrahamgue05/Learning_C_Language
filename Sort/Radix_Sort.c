#include <stdio.h>
#include <stdlib.h>

// Function to get the maximum value in the array
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// A function to do counting sort of arr[] according to the digit represented by exp
void count_sort(int arr[], int n, int exp) {
    int *output = (int *)malloc(n * sizeof(int)); // Output array
    int count[10] = {0}; // Count array for digits (0 to 9)

    // Count occurrences of digits in the current place (exp)
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Update count[i] to contain actual position of this digit in output[]
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array from right to left (to maintain stability)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy the sorted output array back to arr[]
    for (int i = 0; i < n; i++)
        arr[i] = output[i];

    // Free memory
    free(output);
}

// Radix Sort function
void radix_sort(int arr[], int n) {
    int max = getMax(arr, n); // Find the maximum number to know the number of digits

    // Do counting sort for every digit, starting from least significant (1s place)
    for (int exp = 1; max / exp > 0; exp *= 10)
        count_sort(arr, n, exp);
}

int main() {
    // Define the array to be sorted
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]); // Get number of elements

    int i;

    // Print original array
    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform Radix Sort
    radix_sort(arr, n);

    // Print sorted array
    printf("Sorted array (Radix Sort):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
