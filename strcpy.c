#include <stdio.h>
#include <string.h>  // For strcpy

int main() {
    char source[] = "Hello, My Sahil !";
    char destination[20];  // Enough space for the source string + null terminator

    strcpy(destination, source);

    printf("Copied string: %s\n", destination);
    return 0;
}
