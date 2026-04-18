#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int largest, smallest;
    float sum = 0, average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
        sum = sum + arr[i];
    }

    average = sum / n;

    printf("\nEntered elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nLargest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    if(average >= 50) {
        printf("Average is above 50\n");
    } else {
        printf("Average is below 50\n");
    }

    return 0;
}