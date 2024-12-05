#include <stdio.h>
#include <stdlib.h>

int main() {

int n,i;
int *ptr;
int count = 0;

printf("enter the number of elements: ");
sacnf("%d", &n);

ptr = (int*)malloc(n* sizeof(int));
if(ptr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
}

// Input array elements 
printf("Enter the elements: \n");
for(i = 0; i < n; i++) {
    scanf("%d", &ptr[i]);
    count++;
}
  
//Print the  count of number of elements in the array
printf("The number of elemnts in the array are: %d",count);

}
