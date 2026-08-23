#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 30;
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Integer %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Integer not found\n");
    }

    return 0;
}
