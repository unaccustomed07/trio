// Write user defined functions for all the inbuilt functions of the above Program.
// (strrev, strcmp, strlen, strcpy, strcat…)

#include <stdio.h>
#include <string.h>


int sstrev(char *a, char *b);

int sstrlen(char *c, char *d);

int sstrcmp(char *e, char *f);

int sstrcpy(char *g, char *h);

int sstrcat(char *i, char *j);

int main()
{

    char s1[20], s2[20];

    printf("Enter the string value 1st and 2nd  \n");
    fgets(s1, 15, stdin);
    fgets(s2, 15, stdin);

    sstrev(s1, s2);

    sstrlen(s1, s2);

    sstrcmp(s1, s2);

    sstrcpy(s1, s2);

    sstrcat(s1, s2);



    return 0;
}

int sstrev(char *a, char *b)
{

    printf("\nRevese of str1 %s", strrev(a));
    printf("\nRevese of str2 %s", strrev(b));
}

int sstrlen(char *c, char *d)
{

    printf("\nlength of str1 %d", strlen(c)+1);
    printf("\nlength of str2 %d", strlen(d));

   
}

int sstrcmp(char *e, char *f)
{
    printf("\nString comparesion between str1 and str2 %d", strcmp(e, f));
}

int sstrcpy(char *g, char *h)
{
    strcpy(g, h);
    printf("\ncopy of str2 in str1 %s", g);
}

int sstrcat(char *i, char *j)
{
    strcat(i,j);
    printf("%s",i);
}
