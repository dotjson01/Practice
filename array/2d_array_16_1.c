#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_STRINGS 5
#define MAX_LENGTH 50

int main() {
    // Array of pointers to strings
    const char *strings[MAX_STRINGS] = {
        "apple",
        "banana",
        "cherry",
        "date",
        "elderberry"
    };

    char input[MAX_LENGTH];
    
    // Get input from user
    printf("Enter a string to search for: ");
    fgets(input, MAX_LENGTH, stdin);
    
    // Remove newline character if present
    input[strcspn(input, "\n")] = 0;

    // Search for the string
    bool found = false;
    for (int i = 0; i < MAX_STRINGS; i++) {
        if (strcmp(strings[i], input) == 0) {
            found = true;
            break;
        }
    }

    // Print result
    if (found) {
        printf("The string \"%s\" was found in the array.\n", input);
    } else {
        printf("The string \"%s\" was not found in the array.\n", input);
    }

    return 0;
}