// when a function calls itself, it's called rescursion.
//
//
//
//
//
//
//
// print "Hello World" 5 times.
//
// #include <stdio.h>
// void printHw(int n);
// int main()
// {
//     printHw(5);
//     return 0;
// }
// void printHw(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     printf("\nHello World");
//     printHw(n - 1);
// }
// .
// .
// .
// .
// .
// .
// .
// print sum of n netural numbers

#include <stdio.h>

int sum(int n);

int main()
{
    int d;
    scanf("%d", &d);
    printf("sum is: %d", sum(d));

    return 0;
}

// recursive function
int sum(int n)
{
    if (n == 1)
    {

        return 1;
    }
    int sumNm1 = sum(n - 1); // sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}
