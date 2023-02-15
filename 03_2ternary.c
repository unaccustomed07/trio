#include<stdio.h>

int main(){
int a;
printf("Enter the first number");
scanf("%d",&a);

int b;
printf("Enter the second number");
scanf("%d",&b);

int c;
printf("Enter the third number");
scanf("%d",&c);

int d;

d = (a>b && a>c)? printf("%d is greater.",a):(b>c)? printf("%d is geater.",b): printf("%d is greater.",c);
  
}