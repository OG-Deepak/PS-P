#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int key = 40;

    int low = 0;
    int high = n - 1;
    int found = 0;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at index %d\n", key, mid);
            found = 1;
            break;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;
}
