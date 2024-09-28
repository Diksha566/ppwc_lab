#include <stdio.h>
int main(void) {
printf("enter the marks of diffrent subject: ");

int phy;
scanf("%d",&phy);

int chem;
scanf("%d",&chem);

int bio;
scanf("%d",&bio);

int math;
scanf("%d",&math);

int comp;
scanf("%d",&comp);

int sum = phy + chem + bio + math + comp;
int avg = sum/5;

if (avg >= 90)
printf("Grade A");

 if (avg >= 80)
printf("Grade B");

if (avg >= 70)
printf("Grade C");

if (avg >= 60)
printf("Grade D");

if (avg >= 40)
printf("Grade E");

else (avg< 40)
printf("Grade F");



return 0;


}
