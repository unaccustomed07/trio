// a variable is that stores the memory address of another variable

// *is called asterisk

// #include <stdio.h>

// int main()
// {

//     int age = 22;
//     int *ptr = &age;
//     int age2 = *ptr;

//     // printing address
//     printf("%p\n", &age); // this will print in hexadecimal. so we will convert it in unsigned to print this in readable format.
//     printf("%u\n", &age); // this syntex will print in unsigned.

//     // printing in ptr
//     printf("%u\n", ptr);

//     // address of ptr
//     printf("%u\n", &ptr);

//     // printing the value
//     printf("%d\n", age);
//     printf("%d\n", *ptr);
//     printf("%d\n", *(&age));

//     printf("%d",age2);

//     return 0;
// }

//
//
//
//
//
//
//
// Find output of giveen code.

// #include <stdio.h>

// int main()
// {
//     int x;
//     int *ptr;

//     ptr = &x;
//     *ptr = 0;

//     printf("X = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     *ptr += 5;
//     printf("X = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     (*ptr)++;
//     printf("X = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

// return 0;
// }

//
//
//
//
//
//
//
//
//
//
//  Print thhe value of'i' from its pointer to pointer
// #include<stdio.h>

// int main(){

// int i = 5;
// int *ptr = &i;
// int **pptr = &ptr;

// printf("%d\n",**pptr);

//     return 0;
// }
//
//
//
//
//
//
//
//
//
//
//
// Pointers in function call
// call by name

// #include <stdio.h>

// void square(int n);
// void _square(int *n);
// int main()
// {

//     int number = 4;
//     square(number);
//     printf("number = %d\n", number);

//     _square(&number);
//     printf("number = %d\n", number);

//     return 0;
// }
// // call by value
// void square(int n)
// {
//     n = n * n;
//     printf("square = %d\n", n);
// }

// // call by refereence
// void _square(int *n)
// {
//     *n = (*n) * (*n); // here we are multiplying 4*4 and storing that value to address of number
//     printf("square = %d\n", *n);
// }

// questions on pointeers in function call

// Q. Swap 2 numbers, a&b.
// in this  question we  will use both call by value and call by reference

// #include <stdio.h>

// void swap(int a, int b);
// void _swap(int *a, int *b);

// int main()
// {

//     int x = 3, y = 5;

//     swap(x, y);
//     printf("x = %d & y = %d\n", x, y);

//     _swap(&x, &y);
//     printf("x = %d & y = %d\n", x, y);

//     return 0;
// }

// //  call by value
// void swap(int a, int b)
// {
//     int t = a;
//     a = b;
//     b = t;
//     printf("a = %d & b = %d\n", a, b);
// }

// // call by reference
// void _swap(int *a, int *b)
// {

//     int t = *a;
//     *a = *b;
//     *b = t;
//     printf("a = %d & b = %d\n", *a, *b);
// }










