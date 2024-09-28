#include <stdio.h>
int main(void) {

int salary;
scanf("%d",&salary);

if( salary <=1000 ) {
float gross_salary = salary + 0.2 + 0.8;
printf("The gross salary is %f\n",gross_salary);
}


if( salary >=10001 && salary > 20000 ) {
float gross_salary = salary + 2.5 + 0.9;
printf("The gross salary is %f\n", gross_salary);
}

if( salary >= 20001  ) {
float gross_salary = salary + 0.3 + 9.5;
printf("The gross salary is %f\n",gross_salary);
}

}

