#include<stdio.h>
int main(void){
int x = 4;
int y = 2;
int z = 9;
int largest = 0;

if(x>y && x>z) {
 largest = x;
 printf("X is largest");
}


if(y>x && y>z){
largest = y;
printf("Y is largest");
}

if(z>x && z >y){
largest = z;
printf("Z is largest");
}

}
