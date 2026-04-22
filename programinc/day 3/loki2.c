#include <stdio.h>

int main() {
    int arr[] = {10, 25, 7, 40, 15};
    int i, max;

    max = arr[0];

    for(i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest = %d", max);

    return 0;
}