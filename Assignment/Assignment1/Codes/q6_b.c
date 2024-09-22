#include <stdio.h>
int main(void){
printf("Enter temprature in freheenite: ");
int f;
scanf("%d",&f);
int c = 3 * (f-32)/9;
printf("The temp in cel is %d",c);
}
