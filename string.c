// #include <stdio.h>
// #include <conio.h>
// void printString(char arr[]);

// int main()
// {

//     char firstName[] = "Aditya";
//     char lastName[] = "Singh";

//     char name[40];
//     // textcolor(RED);

//     printf("Enter your name \n");
//     scanf("%s", name);
//     printf("Your name is %s \n", name);

//     printString(firstName);
//     printString(lastName);

//     return 0;
// }

// void printString(char arr[])
// {

//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         printf("%c", arr[i]);
//     }

//     printf("\n");
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
// #include <stdio.h>

// int main()
// {

//     // char str[100];
//     // gets(str);
//     // fgets(str, 100, stdin);
//     // puts(str);

//     char *canChange = "Aditya Singh";
//     puts(canChange);
//     canChange = "Aditya";
//     puts(canChange);

//     char cannotChange[] = "aditya singh";
//     puts(cannotChange);
//     // cannotChange = "Aditya"; // Here it will give error it this value cannot be change.
//     // puts(cannotChange);

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
// make a program that inputs user's name &prints its length.

// #include <stdio.h>
// #include <string.h>
// void printSring(char arr[]);
// int countLength(char arr[]);

// int main()
// {

//     char name[100];
//     printf("enter your name");
//     fgets(name, 100, stdin);

//     printf("Length is : %d\n", countLength(name));

//     printf("length by library functions : %d", strlen(name)); // this is library function to print length of string.

//     return 0;
// }

// int countLength(char arr[])
// {
//     int count = 0;
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count - 1;
// }

// void printString(char arr[])
// {

//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
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
// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     char oldStr[] = "This is oldStr";
//     char newStr[] = "This is newStr";

//     strcpy(newStr, oldStr); // here strcpy copies value of old string to new string to new string.
//     puts(newStr);

//     printf("_____________________________________________________________\n ");
//     char firstStr[100] = "Hello ";
//     char secString[] = "World";

//     strcat(firstStr, secString); // firstStr = firstStr + secString;
//     puts(firstStr);

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
//  Here we will use strcmp();

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     // textcolor(RED);

//     char firstStr[] = "Applef";
//     char secStr[] = "Banana";

//     printf("%d", strcmp(firstStr, secStr));

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
// Take input from user using %c
// #include <stdio.h>
// #include <String.h>

// int main()
// {
//     char str[100];
//     char ch;
//     int i = 0;
    

//     while (ch != '\n')
//     {
//         scanf("%c", &ch);
//         str[i] = ch;
//         i++;
//     }
//     str[i] = '\0';
//     puts(str);
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
//
//
//
//  SALTING
// Find the salted form of password entered by user if the salt is "123" &added at the end.
// #include <stdio.h>
// #include <string.h>

// void salting(char password[]);

// int main()
// {

//     char password[100];
//     scanf("%s", &password);
//     salting(password);
//     return 0;
// }

// void salting(char password[])
// {

//     char salt[] = "980";
//     char newPass[200];

//     strcpy(newPass, password); // newPass = "test"
//     strcat(newPass, salt);     // newPass = "tset" + "123"
//     puts(newPass);
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
// Write a function named slice, which takes a string & returns a sliced string form index n to m.
// #include <stdio.h>
// #include <string.h>

// void slice(char str[], int n, int m);

// int main()
// {
//    char str[] = "Aditya Singh";
//    slice(str, 2, 6);
//     return 0;
// }

// void slice(char str[], int n, int m)
// {

//     char newStr[100];
//     int j = 0;

//     for (int i = n; i <= m; i++, j++)
//     {
//         newStr[j] = str[i];
//     }
//     newStr[j] = '\0';
//     puts(newStr);
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {

//     char pr[] = {'H','E','L','L','O','\0'};

//     for (int i = 0; pr[i] <= 'O'; i++)
//     {

//         for (int j = 0; j <= i; j++)
//         {
//             printf("\t %c", pr[j]);
//         }
//         printf("\n");
//     }

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

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     int c;
//     char str1[20], str2[20];
//     printf("Enter the string 1 and 2\n");
//     fgets(str1, 20, stdin);
//     fgets(str2, 20, stdin);
    
//     printf("What case you want to perform\n1: strrev\n2: strcmp\n3: strlen \n4: strcpy \n5: strcat \n6: strupr \n7: strlwr\n");
//     scanf("%d", &c);

//     switch (c)
//     {
//     case 1:

//         printf("\nRevese of str1 %s", strrev(str1));
//         printf("\nRevese of str2 %s", strrev(str2));
//         break;

//     case 2:

//         printf("\nString comparesion between str1 and str2 %d", strcmp(str1, str2));
//         break;

//     case 3:
//         printf("\nlength of str1 %d", strlen(str1));
//         printf("\nlength of str2 %d", strlen(str2));
//         break;

//     case 4:
//         strcpy(str1, str2);
//         printf("\ncopy of str2 in str1 %s", str1);
//         break;

//     case 5:
//         strcat(str1, str2);
//         puts(str1);
//         break;

//     case 6:
//         puts(strupr(str1));
//         puts(strupr(str2));
//         break;

//     case 7:
//         puts(strlwr(str1));
//         puts(strlwr(str2));
//         break;

//     default:
//         printf("Enter the valid number");
//         break;
//     }

//     return 0;
// }
