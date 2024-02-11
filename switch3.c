#include<stdio.h>
int main()
{
    int ch='a'+'b';
    switch(ch){
        case 'a':
        case 'b':
        printf("Look at 10 ideas,11th will occur to you\n");
        break;
        case 'A':
        printf("If you have a good idea");
        case 'b'+'a':
        printf("If you have a bad idea");
    }
}