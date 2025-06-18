#include<stdio.h>
int main()
{
    int hour,minutes;
    printf("enter the time (hh mm)");
    scanf("%d %d", &hour,&minutes);
    
    if (hour >=0 && hour <=23 && minutes >=0 && minutes <=59)
    {
    printf("valid time:");
    }
    else
    {
        printf("invalid time:");
        
    }
  return 0;
}