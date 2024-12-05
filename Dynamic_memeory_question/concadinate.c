#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str1, *str2, *result;
    int len1, len2;

    // Input lengths of the two strings
    printf("Enter the length of the first string: ");
    scanf("%d", &len1);
    printf("Enter the length of the second string: ");
    scanf("%d", &len2);

    // Allocate memory for the strings
    str1 = (char *)malloc((len1 + 1) * sizeof(char)); // +1 for null terminator
    str2 = (char *)malloc((len2 + 1) * sizeof(char));
    result = (char *)malloc((len1 + len2 + 1) * sizeof(char)); // Combined size + null terminator

    if (str1 == NULL || str2 == NULL || result == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input the two strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Concatenate the strings
    strcpy(result, str1);
    strcat(result, str2);

    // Print the concatenated string
    printf("Concatenated string: %s\n", result);

    // Free the allocated memory
    free(str1);
    free(str2);
    free(result);

    return 0;
}
