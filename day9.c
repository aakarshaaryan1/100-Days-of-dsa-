#include <stdio.h>
#include <string.h>

// Recursive function to print string in reverse
void mirror(char str[], int n) {
    if (n < 0)
        return;
    
    printf("%c", str[n]);
    mirror(str, n - 1);
}

int main() {
    char str[1000];
    
    scanf("%s", str);
    
    int len = strlen(str);
    
    mirror(str, len - 1);
    
    return 0;
}