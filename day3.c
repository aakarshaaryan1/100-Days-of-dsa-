#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    int comparisons = 0;
    int found = 0;

    for(int i = 0; i < n; i++) {
        comparisons++;
        if(arr[i] == k) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element not found\n");
    }

    printf("Total comparisons: %d\n", comparisons);

    return 0;
}