#include <stdio.h>

int main() {
    int choice, i, j, n, rows, cols;

    printf("Choose pattern type:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {

        printf("Enter size of square: ");
        scanf("%d", &n);

        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    else if(choice == 2) {
        
        printf("Enter rows and columns: ");
        scanf("%d %d", &rows, &cols);

        for(i = 1; i <= rows; i++) {
            for(j = 1; j <= cols; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    else if(choice == 3) {

        printf("Enter number of rows: ");
        scanf("%d", &n);

        for(i = 1; i <= n; i++) {
            for(j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}