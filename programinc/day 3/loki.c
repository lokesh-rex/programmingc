#include <stdio.h>

int main()
{
    int *ptr;
    int arr[5] = {10,20,30,40,50};
    int i;

    ptr = arr;
    
    printf("array elements using pointer:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n");
    return 0;
}