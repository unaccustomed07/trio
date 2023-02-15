// #include <stdio.h>

// int main()
// {

//     int number[90];
//     int num2[90];

//     printf("enter the first no : ");
//     scanf("%d %d", &number[0],&num2[0]);

//        printf("enter the second no : ");
//     scanf("%d %d", &number[1],&num2[1]);

//     printf("enter the Third no : ");
//     scanf("%d %d", &number[2], &num2[2]);

//     printf("enter the fourth no : ");
//     scanf("%d %d", &number[3], &num2[3]);

//     printf("enter the fifth no : ");
//     scanf("%d %d", &number[4],&num2[4]);

//     printf("final numbers are \n%d \n%d\n%d\n%d\n%d", number[0] + num2[0], number[1] + num2[1], number[2] + num2[2], number[3] + num2[3], number[4] + num2[4]);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int number[90][90];

//     printf("enter the first no : ");
//     scanf("%d", &number[1][2]);

//     printf("enter the first1 no : ");
//     scanf("%d", &number[1][3]);

//     printf("enter the first2 no : ");
//     scanf("%d", &number[2][1]);

//     printf("enter the second no : ");
//     scanf("%d", &number[1][1]);

//     printf("enter the Third no : ");
//     scanf("%d", &number[2][2]);

//     printf("enter the fourth no : ");
//     scanf("%d", &number[3][3]);

//     printf("enter the fifth no : ");
//     scanf("%d", &number[4][4]);

//     printf("final numbers are \n%d \t%d \t%d \n%d\n%d\n%d\n%d", number[1][2], number[1][3], number[2][1], number[1][1], number[2][2], number[3][3], number[4][4]);

//     return 0;
// }

#include <stdio.h>

void main()
{
    int i, sum = 0;
    printf("Numbers between 100 and 200, divisible by 5 : \n");
    for (i = 101; i < 200; i++)
    {
        if (i % 5 == 0)
        {
            printf("%8d", i);
            sum += i;
        }
    }
    printf("\n\nThe sum : %d \n", sum);
}

// #include <stdio.h>

// int main()
// {
//     int arr[147];
//     int s, i, Search, f;

//     printf("Enter size of array: ");
//     scanf("%d", &s);

//     printf("Enter elements in array: ");
//     for (i = 0; i < s; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("\nEnter element to search: ");
//     scanf("%d", &Search);

//     f = 0;

//     for (i = 0; i < s; i++)
//     {

//         if (arr[i] == Search)
//         {
//             f = 1;
//             break;
//         }
//     }

//     if (f == 1)
//     {
//         printf("\n%d is found at position %d", Search, i + 1);
//     }
//     else
//     {
//         printf("\n%d is not found in the array", Search);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int arr[] = {1 2 2 2 2 2 2 2 2};
//     int x;
//     printf("Enter the value");
//     scanf("%d", &x);

//     for (int i = 0; i <=10; i++)
//     {
//         if (arr[i] == x)
//         {
//             printf("Number found");
//         }

//     }

//         return 0;
// }

// #include <stdio.h>

// void main()
// {
//     int marks1[30], marks2[30], marks3[30];
//     printf("Enter the marks of students: \n");
//     for (int i = 0; i <= 30; i++)
//     {
//         printf("Enter the marks of student %d", i+1);

//         printf("\nEnter the marks of sub 1\n");
//         scanf("%d", &marks1[i]);

//         printf("\nEnter the marks of sub 2\n");
//         scanf("%d", &marks2[i]);

//         printf("\nEnter the marks of sub 3\n");
//         scanf("%d", &marks3[i]);
//     }
// }
