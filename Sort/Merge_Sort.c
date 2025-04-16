#include <stdio.h>
#include <stdlib.h>

// --- Function Prototypes ---
void merge_sort(int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);
void printArray(int arr[], int n);

int main() {
    // Define the array to be sorted
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);   // Calculate number of elements

    printf("Original array:\n");
    printArray(arr, n);                     // Print array before sorting

    merge_sort(arr, 0, n - 1);              // Call Merge Sort

    printf("Sorted array (Merge Sort):\n");
    printArray(arr, n);                     // Print array after sorting

    return 0;
}

// --- Function to perform Merge Sort recursively ---
void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;      // Find the middle index

        // Recursively sort the left and right halves
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);

        // Merge the two sorted halves
        merge(arr, left, mid, right);
    }
}

// --- Function to merge two sorted subarrays ---
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;

    // Calculate sizes of the two subarrays
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Allocate temporary arrays
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    // Copy data into temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the two arrays back into arr[]
    i = 0;       // Index for L[]
    j = 0;       // Index for R[]
    k = left;    // Index for merged array

    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    // Copy any remaining elements of L[], if any
    while (i < n1)
        arr[k++] = L[i++];

    // Copy any remaining elements of R[], if any
    while (j < n2)
        arr[k++] = R[j++];

    // Free temporary arrays
    free(L);
    free(R);
}

// --- Utility function to print the array ---
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
