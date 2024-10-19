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

    printf("Enter the position to delete at (0 to %d): ", n);
    scanf("%d", &k);
    k--; 

    
    for (j = k; j < n; j++) {
        p[j] = p[j+1];
    }

  
    printf("Array after Deletion:\n");
    for (int i = 0; i < n-1; i++) {
        printf("%d ", p[i]); 
    }
    printf("\n");

    return 0;
}

