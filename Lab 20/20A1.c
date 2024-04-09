#include <stdio.h>
#include<string.h>
struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Employee emp1;

    strcpy(emp1.name, "Sudeep");
    emp1.age = 30;
    emp1.salary = 50000.0;
    
    printf("Employee Name: %s\n", emp1.name);
    printf("Employee Age: %d\n", emp1.age);
    printf("Employee Salary: %.2f\n", emp1.salary);

    return 0;
}
