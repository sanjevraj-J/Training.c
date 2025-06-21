#include<stdio.h>
int main()
{
    int val=17,i;
    for( i=2;i<val-1;i++)
    {
       if(val%i==0)
       {
           printf("its not a prime");
           break;
       }
    }
    if(i==val-1)
    {
        printf("its a prime");
    }
} 