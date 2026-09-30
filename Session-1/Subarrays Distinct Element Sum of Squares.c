#include <stdio.h>
int main() {
    int a[] = {1, 2, 1};
    int n = 3;

    int sum = 0;

    for (int i = 0; i < n; i++) {

        int distinct[100];
        int count = 0;

        for (int j = i; j < n; j++) {

            int found = 0;

            for (int k = 0; k < count; k++) {
                if (distinct[k] == a[j]) {
                    found = 1;
                    break;
                }
            }

            if (!found) {
                distinct[count] = a[j];
                count++;
            }

            sum = sum + count * count;
        }
    }

    printf("Sum of Squares: %d\n", sum);

    return 0;
}
//Time Complexity: O(n³)
//Space Complexity: O(n)
