#include <stdio.h>

int main() {
    int n;

    // Input size
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize min and max
    int min = arr[0];
    int max = arr[0];

    // Find min and max
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Output
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}