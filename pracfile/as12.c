#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int largest;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];  // Assume first element is largest

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];  // Update largest if current element is greater
        }
    }

    printf("Largest element in the array is: %d\n", largest);

    return 0;
}
