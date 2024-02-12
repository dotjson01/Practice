#include<stdio.h>

int main(){
    int a=3,b=4,c;
    c=b-a;
    switch(c)
    {
        case 1 || 2:
        printf("Good give me your number");
        break;
    //    case a||b: 
        printf("Bad out my class");
        break;
    }

    return 0;
}


#include<stdio.h>

int main(){
    int a=3,b=4,c;
    c=b-a;
    switch(c)
    {
        case 1 || 2:
        printf("Good give me your number");
        break;
        case 3:
        case 4:
        printf("Bad out my class");
        break;
    }

    return 0;
}