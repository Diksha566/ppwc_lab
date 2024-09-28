#include <stdio.h>
int main(void){
int num;

scanf("%d",&num);

if((num%4 && num%100!=0) || (num%400== 0))
	printf("The entred year is leap year\n");
	
else
	printf("The entred year is not a leap year");
	
}
