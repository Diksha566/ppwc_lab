#include <stdio.h>
int main(void){

printf("Enter temprature in Celsius: ");
int c,f;
scanf("%d",&c);
 f = ((9*c)/5) + 32;
 
printf("The temp in Fahernit is %d",f);


scanf("%d",&f);
c = 5 * (f-32)/9;
printf("The temp in cel is %d",c);
}
