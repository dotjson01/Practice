#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,k;
    for(i=1;i<=3;i++){ //The outermost loop runs with i ranging from 1 to 3.

        for(j=1;j<=3;j++){ //Inside this loop, the middle loop runs with j also ranging from 1 to 3.
            for(k=1;k<=3;k++){
                if(i==2 && j==2 && k==2){
                    goto sos;
                }
                printf("%d %d %d\n",i,j,k);
            }
        }
    }
    sos:
    printf("out of loop\n");
    return 0;
}