#include <stdio.h>
int main(void) {
int a = 4;
int b = 8;
int c = 10;

if(a>b && a>c)
printf("a is greater");

if(b>a && b>c)
printf("b is greater");

if(c>b && c>a)
printf("c is greater");

}
