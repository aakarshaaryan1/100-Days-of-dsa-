#include <stdio.h>

int main() {
    int n;
    
    // Input size
    scanf("%d", &n);
    
    int A[n][n];
    
    // Input matrix elements
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    int isIdentity = 1;
    
    // Check identity conditions
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j && A[i][j] != 1) {
                isIdentity = 0;
                break;
            }
            if(i != j && A[i][j] != 0) {
                isIdentity = 0;
                break;
            }
        }
        if(!isIdentity)
            break;
    }
    
    if(isIdentity)
        printf("Identity Matrix");
    else
        printf("Not Identity Matrix");
    
    return 0;
}