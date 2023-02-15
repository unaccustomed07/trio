#include <stdio.h>
int main()
{
    int age = 25;
    printf("YOU ARE 25");

    switch (age)
    {
    case 24:
        printf("You are 24");
        break;
    case 25:
        printf("You are 25");
        break;
    case 26:
        printf("You are 26");
        break;
    case 27:
        printf("You are 27");
        break;
    case 28:
        printf("You are 28");
        break;
    case 29:
        printf("You are 29");
        break;

    default:
        printf("No case matched");
        break;
    }

    return 0;
}