#include <stdio.h>
#include <stdlib.h>

int string_to_int(const char *s) {
    return atoi(s);
}

int main() {
    const char *string_num = "123";
    int integer_num = string_to_int(string_num);
    
    printf("The string '%s' converted to an integer is: %d\n", string_num, integer_num);
    
    return 0;
}