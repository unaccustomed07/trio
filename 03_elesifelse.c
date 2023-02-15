#include <stdio.h>
int main()
{

    int age;
    int placecode = 12;
    scanf("%d",&age);
    if (age > 18)
    {
        printf("You are eligible to drive");
    }
    else if (age > 15)
    {
        printf("You are not eligible to drivr but we will check for a toy vehical for you");
    }
    else{
        printf("Sorry you are a kid and cannot drive");
    }

    return 0;
}