#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int n = 5;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Second largest element = %d\n", secondLargest);

    return 0;
}
