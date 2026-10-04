#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[1000];
    int *ptr = arr;

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    int max = *ptr;
    int min = *ptr;

    for (int i = 1; i < n; i++) {
        int val = *(ptr + i);
        if (val > max) {
            max = val;
        }
        if (val < min) {
            min = val;
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
