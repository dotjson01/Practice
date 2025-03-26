#include <stdio.h>           
#include <string.h>
#include <stdlib.h>

// stdio.h: Standard input/output library, provides functions like printf, scanf, etc.
// string.h: String manipulation library, provides functions like strlen, strcpy, etc.
// stdlib.h: Standard library, provides functions like malloc, calloc, free, etc.

void reverse_string(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

// Takes a character pointer str as input, which is assumed to point to a null-terminated string.
// Calculates the length of the string using strlen(str).
// Iterates through half the length of the string (since we only need to swap pairs of characters).
// Swaps characters at positions i and length - 1 - i using a temporary variable temp. This effectively reverses the string in-place.

void reverse_string_array(char **arr, int size) {
    for (int i = 0; i < size; i++) {
        reverse_string(arr[i]);
    }
}

// Takes a character pointer array arr and its size size as input.
// Iterates through each string in the array.
// Calls the reverse_string function for each string to reverse it in place.

int main() {
    char *strings[] = {
        strdup("Hello"),
        strdup("World"),
        strdup("OpenAI"),
        strdup("GPT")
    };

//     Creates an array of character pointers strings and initializes it with strings using strdup. strdup dynamically allocates memory for the string and returns a pointer to it.
// Calculates the size of the strings array.
// Prints the original strings.
// Calls reverse_string_array to reverse all strings in the array.
// Prints the reversed strings.
// Frees the dynamically allocated memory for each string using free.

    int size = sizeof(strings) / sizeof(strings[0]);

    printf("Original strings:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
    }

    reverse_string_array(strings, size);

    printf("\nReversed strings:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
    }

    // Free allocated memory
    for (int i = 0; i < size; i++) {
        free(strings[i]);
    }

    return 0;
}