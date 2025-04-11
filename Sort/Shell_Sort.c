#include <stdio.h>

// Shell Sort function
void shell_sort(int arr[], int n) {
    int gap, i, j, temp;

    // Start with a big gap, then reduce the gap
    for (gap = n / 2; gap > 0; gap /= 2) {

        // Perform a gapped insertion sort for this gap size
        for (i = gap; i < n; i++) {
            temp = arr[i]; // Store current value
            j = i;

            // Shift earlier gap-sorted elements up until the correct location for arr[i] is found
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap]; // Shift element
                j -= gap;
            }

            // Put temp (the original arr[i]) in its correct location
            arr[j] = temp;
        }
    }
}

int main() {
    // Define the array to be sorted
    int arr[] = {45, 23, 53, 12, 67, 34, 89};
    int n = sizeof(arr) / sizeof(arr[0]); // Get number of elements

    int i;

    // Print original array
    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform Shell Sort
    shell_sort(arr, n);

    // Print sorted array
    printf("Sorted array (Shell Sort):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
