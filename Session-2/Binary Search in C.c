#include <stdio.h>
int main() {
    int arr[100], n, x;
    int low, high, mid;
    int found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &x);
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == x) {
            found = 1;
            break;
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (found)
        printf("%d exists in the array.\n", x);
    else
        printf("%d does not exist in the array.\n", x);
    return 0;
}

