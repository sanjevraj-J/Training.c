#include<stdio.h>
int main()
{
    int day,month,year;
    printf("enter the date (dd mm yy):");
    scanf("%d %d %d",&day, &month, &year);
    
    if(month<1 || month>12 || day<1 || day>31)
    {
        printf("invalid date:");
        return 0;
    }
    int daysinmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(day<=daysinmonth[month-1])
    {
        printf("valid date");
        return 0;
    }
    else  {
        printf("invalid date:");
    }
  return 0;
}