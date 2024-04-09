
#include <stdio.h>
struct Student {
    char name[50];
    float percentage;
    int age;
};
int main() {
    struct Student students[5];
    int i;
     printf("Enter details of 5 students:\n");

    for ( i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    printf("\nStudent details:\n");

    for ( i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("Age: %d\n", students[i].age);
    }

    return 0;
}

