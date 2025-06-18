/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int day;
    printf("enter the day(1-7): ");
    scanf("%d",&day);
    if (day==1)
    {
        printf("sunday");
    }
    else if (day==2)
    {
        printf("monday");
    }
    else if (day==3)
    {
        printf("tuesday");
    }
    else if (day==4)
    {
        printf("wednesday");
    }
    else if (day==5)
    {
        printf("thursday");
    }
    else if (day==6)
    {
        printf("friday");
    }
    else
    {
        printf("saturday");
    }
    return 0;
}
