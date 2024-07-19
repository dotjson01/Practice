#include <stdio.h>
#include <string.h>

int main()
{
    struct employee
    {
        char name[10];
        int age;
        float salary;
    };

    struct employee e1 = {"Sanjay", 30, 5500.50};
    struct employee e2, e3; // not assigned valued , as copying from e1

    strcpy(e2.name, e1.name); // copying e2 from e1
    e2.age = e1.age;          // getting e2 age from e1
    e2.salary = e1.salary;    // getting e2 salary from e1
    e3 = e2;                  // decalred e3 as value got to e2 , now the values will be decalred under e3
    printf("%s %d %f\n", e1.name, e1.age, e1.salary);
    printf("%s %d %f\n", e2.name, e2.age, e2.salary);
    printf("%s %d %f\n", e3.name, e3.age, e3.salary);

    return 0;
}