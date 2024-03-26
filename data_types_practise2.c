#include<stdio.h>
void func();
int main(){
    func();
    func();
    return 0;
}
void func()
{
    auto int i = 0;
    register int j = 0;
    /* i and j are local variable are automatically initialized every time the function they are in is called*/
    static int k = 0;
    i++; j++; k++;
    printf("i=%d, j=%d, k=%d\n",i,j,k);
}

/* Once func finishes execution and returns, 
the memory allocated for i is deallocated. This means i essentially ceases to exist.
So, on the next call to func, a new i is created with a fresh memory allocation and initialized to 0 again.
*/

/* 
Importantly, the memory allocated for k persists even after func returns. This means k retains its value between function calls.
On subsequent calls to func, k already has allocated memory and a value. The increment (k++) is applied to the existing value, and the updated value is used.
*/