#include<stdio.h>
int main(){

int a;
printf("The temprature in calcius is ? \n");
scanf("%d", &a);

int f= (a * 9/5) + 32;
printf("The value of temprature in fahrenheite is %d \n",f);


int r ;
printf ("The radius of circle is ?\n");
scanf("%d",&r);
printf("The radius of circle is %f \n", 3.14*r*r);

return 0;
}