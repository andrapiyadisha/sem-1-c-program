
#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    int age;
    float salary;
};
union Person {
    char name[50];
    int age;
    float salary;
};
int main() {
    struct Employee emp;
    union Person person;
    strcpy(emp.name, "Leo");
    emp.age = 30;
    emp.salary = 50000.0;
    strcpy(person.name, "Jane ");
    person.age = 25;
    person.salary = 60000.0;
    printf("Employee Information (Structure):\n");
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Salary: %.2f\n", emp.salary);

    printf("\nPerson Information (Union):\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Salary: %.2f\n", person.salary);

    return 0;
}

