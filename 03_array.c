#include <stdio.h>
#include<string.h>
int main()
{
    char header[200][200];
     header[1][15] = "Roll Number";
     header[1][8] = "Name";
     header[1][9] = "Address";
     header[1][10] = "Percentage";

    printf("%c \t%c \t%c \t%c", header[15], header[8], header[9], header[10]);

    return 0;
}