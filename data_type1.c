#include<stdio.h>

int main(){
    char ch=128; // This is outside the range of a char, so it overflows. The value wraps around from the lowest limit and ch becomes -128.
    char dh= -132; // This is below the range of a char, so it underflows. The value wraps around from the highest limit and dh becomes 124.
    printf("%hhu %hhd\n",ch,dh);
    return 0;
}
