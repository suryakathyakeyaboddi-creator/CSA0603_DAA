#include <stdio.h>
int main() {
    int a[] = {10, 25, 7, 45, 30};
    int n = 5;

    int max = a[0];

    for (int i = 1; i < n; i++) {

        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("Maximum Element: %d\n", max);
    return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(1)