#include <stdio.h>

int main() {
    int a[] = {3, 1, 2, 3, 3};
    int n = 5;
    int k = 2;

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (a[i] == a[j] && (i * j) % k == 0) {
                count++;
            }
        }
    }

    printf("Number of Equal and Divisible Pairs: %d\n", count);

    return 0;
}
//Time Complexity: O(n²)
//Space Complexity: O(1)
