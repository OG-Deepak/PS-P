#include <stdio.h>

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;
    int index = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill the remaining positions with zeros
    while (index < n) {
        arr[index] = 0;
        index++;
    }

    printf("Array after moving zeros: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
