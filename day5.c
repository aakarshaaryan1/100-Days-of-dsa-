#include <stdio.h>

int main() {
    int p, q;

    // Input size of first log
    scanf("%d", &p);
    int log1[p];

    for(int i = 0; i < p; i++) {
        scanf("%d", &log1[i]);
    }

    // Input size of second log
    scanf("%d", &q);
    int log2[q];

    for(int i = 0; i < q; i++) {
        scanf("%d", &log2[i]);
    }

    int merged[p + q];

    int i = 0, j = 0, k = 0;

    // Merge both logs
    while(i < p && j < q) {
        if(log1[i] <= log2[j]) {
            merged[k++] = log1[i++];
        } else {
            merged[k++] = log2[j++];
        }
    }

    // Copy remaining elements
    while(i < p) {
        merged[k++] = log1[i++];
    }

    while(j < q) {
        merged[k++] = log2[j++];
    }

    // Output merged log
    for(int i = 0; i < p + q; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}