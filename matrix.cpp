#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int c, d, e[2000][2000], f, g, h[2000][2000],m,n;
    int a[2000][2000];
    // int b[2000][2000];
    // int b[10][10];

    cout<<"Enter the size of 1st matrix ";
    cin>>c;

    printf("Enter the size of 2nd matrix\n");
    scanf("%d", &d);

    printf("Enter the elements of first matrix\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[1000+i][1000+j]);
        }
    }

    printf("Enter the elements of second matrix\n");
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            scanf("%d", &b[1000+i][1000+j]);
        }
    }








    // printf("Type of operation you want\n");

    // printf("1 : Addition\n");
    // printf("2 : Subtraction \n");
    // printf("3 : Multiplication\n");
    // printf("4 : Transpose\n");

    // scanf("%d", &f);

    // switch (f)
    // {
    // case 1:
    //     for (int i = 0; i < c; i++)
    //     {
    //         for (int j = 0; j < c; j++)
    //         {
    //             printf("\t %d", a[i][j] + b[i][j]);
    //         }
    //         printf("\n");
    //     }
    //     break;

    // case 2:
    //     for (int i = 0; i < c; i++)
    //     {
    //         for (int j = 0; j < c; j++)
    //         {
    //             printf("\t %d", a[i][j] - b[i][j]);
    //         }
    //         printf("\n");
    //     }
    //     break;

    //     // case 3 not completd yet.
    // case 3:
    //     printf("multiply of the matrix=\n");
    //     for (int i = 0; i < c; i++)
    //     {
    //         for (int j = 0; j < c; j++)
    //         {
    //             e[i][j] = 0;
    //             for (int k = 0; k < c; k++)
    //             {
    //                 e[i][j] += a[i][k] * b[k][j];
    //             }
    //         }
    //     }
    //     // for printing result
    //     for (int i = 0; i < c; i++)
    //     {
    //         for (int j = 0; j < c; j++)
    //         {
    //             printf("%d\t", e[i][j]);
    //         }
    //         printf("\n");
    //     }
    //     break;

    // case 4:
    //     // computing the transpose
    //     for (int i = 0; i < c; ++i)
    //         for (int j = 0; j < c; ++j)
    //         {
    //             h[j][i] = a[i][j];
    //         }

    //     // printing the transpose
    //     printf("\nTranspose of the matrix:\n");
    //     for (int i = 0; i < c; ++i)
    //         for (int j = 0; j < c; ++j)
    //         {
    //             printf("%d  ", h[i][j]);
    //             if (j == c - 1)
    //                 printf("\n");
    //         }
    //     break;

    // default:
    //     break;
    // }

    return 0;
}