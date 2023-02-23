// #include<stdio.h>
// #include<string.h>

// struct student
// {
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main(){

// struct student stu;
// stu.roll = 10036603;
// stu.cgpa = 9.3;
// strcpy(stu.name, "Aditya Kumar Singh");

// printf("Students name = %s\n", stu.name);
// printf("Students roll no. = %d\n", stu.roll);
// printf("Students cgpa = %f\n", stu.cgpa);

// struct student s2;
// s2.roll = 10036603;
// s2.cgpa = 10;
// strcpy(s2.name, "Ultron");

// printf("Students name = %s\n", s2.name);
// printf("Students roll no. = %d\n", s2.roll);
// printf("Students cgpa = %f\n", s2.cgpa);

// struct student s3;
// s3.roll = 10036603;
// s3.cgpa = 10;
// strcpy(s3.name, "Kali");

// printf("Students name = %s\n", s3.name);
// printf("Students roll no. = %d\n", s3.roll);
// printf("Students cgpa = %f\n", s3.cgpa);

// return 0;

// }
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .

#include <stdio.h>
#include <string.h>

// struct student
// {
//     int roll;
//     float cgpa;
//     char name[100];
// };

// void printInfo(struct student s1);

// typedef struct computerengineeringstudent
// {
//     int roll;
//     float cgpa;
//     char name[100];
// } cse; // here cse is the nickname of computerengineeringstudent.

// struct address
// {
//     int houseNo;
//     int block;
//     char city[100];
//     char state[100];
// };
// void printAdd(struct address add);

struct vector
{
    int x;
    int y;
};

void calcsum(struct vector v1, struct vector v2, struct vector sum);

// struct complex
// {
//     int real;
//     int imag;
// };

int main()
{

    // struct student cee[95];
    // cee[0].roll = 13366601;
    // cee[0].cgpa = 13.366601;
    // strcpy(cee[0].name, "Aditya");

    // printf("name = %s\n", cee[0].name);
    // printf("roll no. = %d\n", cee[0].roll);
    // printf("cgpa = %f\n", cee[0].cgpa);
    // printf("*****************************************************\n");
    //
    //
    //
    // pointers in array
    // struct student s1 = {7242, 8.9, "Aditya"};
    // printf("Student roll = %d\n", s1.roll);

    // struct student *pi = &s1;
    // printf("student roll = %d\n", (*pi).roll);
    // printf("Student -> roll = %d\n", pi->roll);
    // printf("Student -> cgpa = %f\n", pi->cgpa);
    // printf("Student -> name = %s\n", pi->name);
    // printf("*****************************************************\n");
    //
    ///
    //
    //
    //
    //
    //
    //
    // FUNCTION IN STRUCTURE
    // printInfo(s1);
    // printf("student.roll = %d \n", s1.roll);
    // printf("*****************************************************\n");

    //
    //
    //
    //
    //
    //
    //
    // code for typedef
    // cse ss;
    // ss.roll = 10036;
    // ss.cgpa = 9.6;
    // strcpy(ss.name, "Aditya typedef");
    // printf("student name = %s\n", ss.name);
    // printf("*****************************************************\n");
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
    // ENTER THE ADDRESS(house no, block no., city, state) of 5 people.
    //
    // struct address adds[5];

    // printf("Enter the Information of person 1 : ");
    // scanf("%d", &adds[0].houseNo);
    // scanf("%d", &adds[0].block);
    // scanf("%s", adds[0].city);
    // scanf("%s", adds[0].state);

    // printf("Enter the Information of person 2 : ");
    // scanf("%d", &adds[1].houseNo);
    // scanf("%d", &adds[1].block);
    // scanf("%s", adds[1].city);
    // scanf("%s", adds[1].state);

    // printf("Enter the Information of person 3 : ");
    // scanf("%d", &adds[2].houseNo);
    // scanf("%d", &adds[2].block);
    // scanf("%s", adds[2].city);
    // scanf("%s", adds[2].state);

    // printf("Enter the Information of person 4 : ");
    // scanf("%d", &adds[3].houseNo);
    // scanf("%d", &adds[3].block);
    // scanf("%s", adds[3].city);
    // scanf("%s", adds[3].state);

    // printf("Enter the Information of person 5 : ");
    // scanf("%d", &adds[4].houseNo);
    // scanf("%d", &adds[4].block);
    // scanf("%s", adds[4].city);
    // scanf("%s", adds[4].state);

    // printAdd(adds[0]);
    // printAdd(adds[1]);
    // printAdd(adds[2]);
    // printAdd(adds[3]);
    // printAdd(adds[4]);

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
    // create a structure to store vectors. Then make a function to return sum of 2 vectors.
    //
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 7};
    struct vector sum = {0};

    calcsum(v1, v2, sum);

    //
    //
    //
    //
    //
    //
    // CREATE A STRUCTURE TO STORE COMPLEX NUMBERS.(USE ARROW OPERATORS)
    //
    //  struct complex number1 = {5,8};
    //  struct complex *pt = &number1;
    //  printf("real part = %d\n", pt -> real);
    //  printf("imag part = %d\n", pt -> imag);

    return 0;
}

// void printInfo(struct student s1)
// {
//     printf("student information using function : \n");

//     printf("Student.roll = %d\n", s1.roll);
//     printf("Student. cgpa = %f\n", s1.cgpa);
//     printf("Student.name = %s\n", s1.name);

//     // s1.roll = 4272;
// }

// void printAdd(struct address add)
// {
//     printf("address is : %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
// }

void calcsum(struct vector v1, struct vector v2, struct vector sum)
{

    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of x is : %d\n", sum.x);
    printf("sum of y is : %d\n", sum.y);
}
