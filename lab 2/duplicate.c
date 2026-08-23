#include <stdio.h>

int main() {
    int arr[] = {10, 20, 10, 30, 20, 40};
    int n = 6;

    printf("Distinct elements: ");

    for (int i = 0; i < n; i++) {
        int duplicate = 0;

        // Check whether the element appeared before
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }

        // Print only if it is not a duplicate
        if (duplicate == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
