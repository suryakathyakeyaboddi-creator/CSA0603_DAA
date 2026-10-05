#include <stdio.h>
// Heapify the array
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int temp;
    // Check left child
    if (left < n && arr[left] > arr[largest])
        largest = left;
    // Check right child
    if (right < n && arr[right] > arr[largest])
        largest = right;
    // If largest is not the root
    if (largest != i) {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}
// Heap Sort
void heapSort(int arr[], int n) {
    int i, temp;
    // Build max heap
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    // Extract elements one by one
    for (i = n - 1; i > 0; i--) {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}
int main() {
    int nums[] = {5, 2, 8, 1, 3};
    int n = 5;
    heapSort(nums, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);
    return 0;
}

//Time Complexity: O(n log n)
//Space Complexity: O(1)
