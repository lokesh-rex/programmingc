#include <stdio.h>

int main() {
    int age, id;
    char name[50];
    float grade;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your ID: ");
    scanf("%d", &id);

    printf("Enter your grade: ");
    scanf("%f", &grade);

    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", name);
    printf("Age   : %d\n", age);
    printf("ID    : %d\n", id);
    printf("Grade : %.2f\n", grade);

    return 0;
}