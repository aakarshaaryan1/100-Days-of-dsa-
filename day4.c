#include <stdio.h>

int main() {
    int n;
    
    // Input size
    scanf("%d", &n);
    
    int arr[n];
    
    // Input elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Two-pointer reverse
    int i = 0, j = n - 1;
    
    while(i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
        i++;
        j--;
    }
    
    // Output reversed array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}