#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j])
            return 0;

        i++;
        j--;
    }

    return 1;
}

int main() {
    char arr[5][20] = {"hello", "world", "madam", "level", "racecar"};

    int n = 5;

    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            printf("First Palindromic String: %s\n", arr[i]);
            return 0;
        }
    }

    printf("No Palindromic String Found\n");

    return 0;
}
//Time Complexity: O(n × m)
//Space Complexity: O(1)