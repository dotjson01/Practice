#include<stdio.h>
#include<string.h>

int main(){
    char list[6][20]={"apple","banana","cherry","date","elderberry","fig"};
    int i;
    char yourname[20];
    printf("Enter your name: ");
    scanf("%s",yourname);
    for(i=0;i<6;i++){
        if(strcmp(list[i],yourname)==0){
            printf("You are in the list\n");
return 0;
        }
        else 
        printf("You are not in the list\n");

    }
}
