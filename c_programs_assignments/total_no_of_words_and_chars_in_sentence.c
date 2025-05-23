#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, charCount = 0, wordCount = 1; // Word count starts from 1 assuming at least one word

    // Taking input from user
    printf("Enter a line of text: ");
    gets(str);

    // Counting characters and words
    for (i = 0; str[i] != '\0'; i++) {
        // Count characters (excluding newline)
        if (str[i] != '\n')
            charCount++;

        // Count words (if space is found and next character is not a space)
        if (str[i] == ' ' )
            wordCount++;
    }

    // Display results
    printf("Total Characters (excluding newline): %d\n", charCount);
    printf("Total Words: %d\n", wordCount);

    return 0;
}
