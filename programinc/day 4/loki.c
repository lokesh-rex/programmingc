#include <stdio.h>

void addValue(int x) {
    x = x + 5;
    printf("Inside addValue (pass by value): x = %d\n", x);
}

void addReference(int *x) {
    *x = *x + 5;
    printf("Inside addReference (pass by reference): x = %d\n", *x);
}

int main() {
    int a = 10;

    printf("Before function calls: a = %d\n", a);

    addValue(a);     
    printf("After addValue: a = %d\n", a);

    addReference(&a); 
    printf("After addReference: a = %d\n", a);

    return 0;
}