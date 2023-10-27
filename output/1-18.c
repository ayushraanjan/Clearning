#include <stdio.h>
#define MAX 1000

int main() {
    char c[MAX];
    int i;
    int j = 0;
    int length = 0;
    int lastNonSpaceIndex = -1;  // Initialize to -1 to track the last non-space character

    while ((i = getchar()) != EOF && i != '\n') {
        c[j] = i;
        j++;
        length++;
        if (i != ' ' && i != '\t') {
            lastNonSpaceIndex = j - 1;  // Update the index of the last non-space character
        }
    }

    if (lastNonSpaceIndex != -1) {
        // There was at least one non-space character on this line
        for (int k = 0; k <= lastNonSpaceIndex; k++) {
            putchar(c[k]);  // Print non-space characters
        }
        putchar('\n');  // Print a newline character to end the line
    }

    return 0;
}
