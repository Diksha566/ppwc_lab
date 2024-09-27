#include<stdio.h>
int main(void){
int num;

scanf("%d",&num);


if(num%5==0 && num%11==0)
	printf("Yes, the entred is divisble by both 5 and 11");

if(num%5!=0 || num%11!=0)	
	printf("NO, the entred is divisble by both 5 and 11");
	

}
