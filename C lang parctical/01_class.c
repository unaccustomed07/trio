// Wap to calculate exponantial without pow();
// removing duplicate elements fron an array.

#include <stdio.h>
int main()
{

    int p, a,n;

    printf("Enter the number");
    scanf("%d", &a);
    printf("enter the power");
    scanf("%d", &p);

    for (int i = 0; i <= p; i++)
    {
     n = n * a;
    }
        printf("\nthe final number is %d", n);
    return 0;
}































// #include <stdio.h>
// #include <conio.h>
// int main()
// {

//     int arr[20], i, j, k, size;

//     printf(" Define the number of elements in an array: ");
//     scanf(" %d", &size);

//     printf(" \n Enter %d elements of an array: \n ", size);

//     for (i = 0; i < size; i++)
//     {
//         scanf(" %d", &arr[i]);
//     }

//     for (i = 0; i < size; i++)
//     {
//         for (j = i + 1; j < size; j++)
//         {

//             if (arr[i] == arr[j])
//             {

//                 for (k = j; k < size - 1; k++)
//                 {
//                     arr[k] = arr[k + 1];
//                 }

//                 size--;

//                 j--;
//             }
//         }
//     }

//     printf(" \n Array elements after deletion of the duplicate elements: ");

//     for (i = 0; i < size; i++)
//     {
//         printf(" %d \t", arr[i]);
//     }
//     return 0;
// }