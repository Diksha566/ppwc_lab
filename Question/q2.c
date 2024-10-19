#include <stdio.h>

#define MAX 100 // Define a maximum size for the array

int main() {
    int p[MAX], i, j, k, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n); 

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]); 
    }

    printf("Enter the position to insert at (0 to %d): ", n);
    scanf("%d", &k);
    if (k < 0 || k > n) {
        printf("Invalid position!\n");
        return 1; 
    }
    k--; 

    
    for (i = n; i > k; i--) {
        p[i] = p[i - 1];
    }

    printf("Enter the value to insert: ");
    scanf("%d", &p[k]); 

    n++; 

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", p[i]); 
    }
    printf("\n");

    return 0;
}

