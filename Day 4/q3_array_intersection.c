#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter the size of the first array: ");
    if (scanf("%d", &n1) != 1 || n1 <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr1[1000];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    if (scanf("%d", &n2) != 1 || n2 <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr2[1000];
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int foundCount = 0;

    for (int i = 0; i < n1; i++) {
        int alreadyProcessed = 0;
        for (int k = 0; k < i; k++) {
            if (arr1[k] == arr1[i]) {
                alreadyProcessed = 1;
                break;
            }
        }

        if (alreadyProcessed) {
            continue;
        }

        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                if (foundCount == 0) {
                    printf("Common elements: ");
                }
                printf("%d ", arr1[i]);
                foundCount++;
                break;
            }
        }
    }

    if (foundCount == 0) {
        printf("No common elements\n");
    } else {
        printf("\n");
    }

    return 0;
}
