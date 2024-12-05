#include <stdio.h>
#include <stdlib.h>

int main(void) {

int n,i;
int *ptr;
int count = 0;
int sum = 0;

printf("Enter the number of elemnts in the array: ");
scanf("%d", &n);

ptr = (int*)malloc(n * sizeof(int));
if(ptr == NULL) {
    printf("Memory allocation falied");
    return 1;
}

// Input array elements 
printf("Enter the elements: \n");
for(i = 0; i < n; i++) {
    scanf("%d", &ptr[i]);
    count++;
    sum  = sum + ptr[i];
    }

// Calculating the average 
int result = sum / count ; 

printf("The avrage of array elements are: %d", result);

}

