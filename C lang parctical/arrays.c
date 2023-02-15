#include<stdio.h>


int main(){

  int marks[3];
// Arrays---> Collection of similer data types stored at contiguous memory locations

// int marks[3]; here 3 means size of Arrays
// char name[10]; here 10 means size of Arrays
// float price[2]; here 2 means size of Arrays

// if we want to take input and output in Arrays----->  scanf("%d",&marks[0]);
//                                                     printf("%d",&marks[0]);
//int marks[] = {97, 98, 89}; // syntex for Arrays

printf("enter math marks : ");
scanf("%d",&marks[0]);

printf("enter phy marks : ");
scanf("%d",&marks[1]);

printf("enter chemistry marks : ");
scanf("%d",&marks[2]);

printf("math = %d, physics = %d, chemistry = %d",marks[0], marks[1], marks[2]);



return 0;
}
