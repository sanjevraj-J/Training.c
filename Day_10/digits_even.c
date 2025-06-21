#include<stdio.h>
int main()
{
    int val=223,odd=0,even=0;
    while(val>0)
    {
        if((val%10)%2==0){
            even++;
        }
        else
        odd ++;
        val/=10;
    }
    printf("%d",odd);
    printf("%d",even);
}