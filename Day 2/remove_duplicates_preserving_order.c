#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 1000
#define ASCII_SIZE 256

/**
 * Removes duplicate characters from a string while preserving original order.
 * Time Complexity:  O(n) - Single pass using a hash set / lookup table
 * Space Complexity: O(1) - Fixed-size boolean array for 256 ASCII characters
 */
void removeDuplicatesPreservingOrder(const char *str, char *result) {
    bool seen[ASCII_SIZE] = {false};
    int writeIndex = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];
        if (!seen[ch]) {
            seen[ch] = true;
            result[writeIndex++] = str[i];
        }
    }

    result[writeIndex] = '\0';
}

int main() {
    char input[MAX_LEN];
    char result[MAX_LEN];

    printf("========================================\n");
    printf("   Remove Duplicates (Preserve Order)   \n");
    printf("========================================\n");
    printf("Enter a string: ");

    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Remove trailing newline character if present
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        removeDuplicatesPreservingOrder(input, result);

        printf("Output: %s\n", result);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}
