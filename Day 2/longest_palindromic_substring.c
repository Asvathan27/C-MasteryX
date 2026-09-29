#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

/**
 * Helper function to expand around a center (left, right)
 * using the Two Pointers approach and return the length of the palindrome found.
 */
int expandAroundCenter(const char *str, int left, int right, int len) {
    while (left >= 0 && right < len && str[left] == str[right]) {
        left--;
        right++;
    }
    // Palindrome length is (right - 1) - (left + 1) + 1 = right - left - 1
    return right - left - 1;
}

/**
 * Finds the longest palindromic substring using Center Expansion (Two Pointers).
 * Time Complexity:  O(n^2)
 * Space Complexity: O(1) auxiliary space
 */
void findLongestPalindrome(const char *str, char *result) {
    int len = (int)strlen(str);
    if (len == 0) {
        result[0] = '\0';
        return;
    }

    int start = 0;
    int maxLen = 1;

    for (int i = 0; i < len; i++) {
        // Odd-length palindromes (single-character center)
        int len1 = expandAroundCenter(str, i, i, len);
        // Even-length palindromes (two-character center)
        int len2 = expandAroundCenter(str, i, i + 1, len);

        int currentMax = (len1 > len2) ? len1 : len2;

        if (currentMax > maxLen) {
            maxLen = currentMax;
            start = i - (currentMax - 1) / 2;
        }
    }

    // Extract the longest palindromic substring
    strncpy(result, str + start, maxLen);
    result[maxLen] = '\0';
}

int main() {
    char input[MAX_LEN];
    char result[MAX_LEN];

    printf("========================================\n");
    printf("     Longest Palindromic Substring      \n");
    printf("========================================\n");
    printf("Enter a string: ");

    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Remove trailing newline character if present
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        findLongestPalindrome(input, result);

        printf("Output: %s\n", result);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}
