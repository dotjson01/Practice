#include<stdio.h>
int addmult(int , int);

int main(){
    int i=3,j=4,k,l;
    k=addmult(i,j);
    l=addmult(i,j);
    printf("The result of addmult is %d and %d",k,l);
    return 0;
    
}
int addmult(int x, int y){
   int u,v;
   u=x+y;   
    v=x*y;
    return u,v;
    
}