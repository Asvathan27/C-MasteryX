#include <stdio.h>

int maxSubarraySum(int arr[], int n) {
    int maxSoFar = arr[0];
    int currentMax = arr[0];

    for (int i = 1; i < n; i++) {
        if (currentMax + arr[i] > arr[i]) {
            currentMax = currentMax + arr[i];
        } else {
            currentMax = arr[i];
        }

        if (currentMax > maxSoFar) {
            maxSoFar = currentMax;
        }
    }

    return maxSoFar;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[1000];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = maxSubarraySum(arr, n);
    printf("Maximum subarray sum: %d\n", maxSum);

    return 0;
}
