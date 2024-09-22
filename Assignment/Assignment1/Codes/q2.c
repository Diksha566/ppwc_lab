#include <stdio.h>
int main(void)
{
//sum and avg of two number
int num1, num2;
scanf("%d",&num1);
scanf("%d",&num2);
double sum, avg;
sum = (double)num1+num2;
avg = (double)(num1+num2/2);
printf("The sum of the numbers is %lf\n",sum);
printf("The avg of the numbers is %lf\n",avg);
return 0;
}
