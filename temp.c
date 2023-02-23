// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {

//     int n;

//     printf("Name: Aditya \nUID: 22BCS15552\n");

//     printf("Enter the number of characters you want to enter: ");
//     scanf("%d", &n);

//     fgetc(stdin);

//     char *s = (char *)malloc(n * sizeof(char));

//     if (s == NULL)
//     {
//         printf("Memory allocation failed.\n");

//         exit(0);
//     }

//     printf("Enter the string: ");

//     gets(s);

//     printf("The entered string is: %s", s);

//     printf("\nEnter the new size of the string: ");
//     scanf("%d", &n);

//     fgetc(stdin);

//     s = (char *)realloc(s, n * sizeof(char));

//     if (s == NULL)
//     {

//         printf("Memory allocation failed.\n");

//         exit(0);
//     }

//     printf("Enter the string: ");
//     gets(s);

//     printf("The entered string is: %s", s);

//     free(s);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i;

//     /* Print ASCII values from 0 to 255 */
//     for (i = 0; i <= 900; i++)
//     {
//         printf("ASCII value of character %c = %d\n", i, i);
//     }

//     return 0;
// }
