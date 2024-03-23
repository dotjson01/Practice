#include <stdio.h>
#include <stdlib.h>
int main(){
    short signed int a;
short unsigned int b;
long signed int c;
unsigned int j;
signed long int x;
unsigned long int y;
signed long long int m;
unsigned long long int n;
signed int i;
signed char ch='G';
printf("size of signed char:%d\n",ch);
printf("size of short signed int:%d\n",sizeof(a));
printf("size of short unsigned int:%d\n",b);
printf("size of long signed int:%d\n",sizeof(c));
printf("size of unsigned int:%d\n",sizeof(j));
printf("size of signed long int:%d\n",sizeof(x));
printf("size of unsigned long int:%d\n",sizeof(y));
printf("size of signed long long int:%d\n",sizeof(m));
printf("size of unsigned long long int:%d\n",sizeof(n));
printf("size of signed int:%d\n",sizeof(i));


return 0;

}

/*
The size of a datatype refers to the amount of memory space that a variable of this datatype occupies, measured in bytes. 
This size can vary depending on the datatype and the specific system architecture (32-bit or 64-bit). 
For example, on most systems, an int typically takes up 4 bytes of memory.

The range of a datatype refers to the set of all possible values that a variable of this datatype can hold. 
This range is determined by the size of the datatype and whether it is signed or unsigned. 
For example, a short unsigned int (usually 2 bytes) can hold values from 0 to 65,535.

In your code, sizeof(b) returns the size of the variable b in bytes.
 If b is a short unsigned int, this will typically return 2.

The line printf("size of short unsigned int:%d\n",b); is incorrect if you want to print the size of b. 
It will print the value of b, not its size. 
To print the size, you should use sizeof(b), like in the line printf("size of short unsigned int:%d\n",sizeof(b));
*/