#include<stdio.h>
int main(){
    int i=3; //integer variable
    int *j; //pointer variable
    j=&i;   //j=address of i
    printf("The value of i is %u\n",&i);
  printf("Address of i=%u\n", j);
  printf("Address of j=%u\n", &j);
}

// #include<stdio.h>
// int main(){
//     int i=3;
//     int *j;
//     j=&i;   //j=address of i
//     printf("The value of i is %p\n",(void*)&i);
//     printf("Address of i=%p\n", (void*)j);
//     printf("Address of j=%p\n", (void*)&j);
//     return 0;
// }