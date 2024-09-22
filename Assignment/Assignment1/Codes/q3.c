#include <stdio.h>
int main(void)
{
//princt ascii value
//char a; //this was showing 0, becuase no vaue given
char a = 'a';
scanf("Enter any alphabte%c",&a);
int c = (int)a; //not needed
printf("The ASCII value of the entred value is %d\n",a);
return 0;
}
