#include<stdio.h>
int main(){
    int val,sum=0,a;
    scanf("%d",&val);
    int temp=val;
    while(val>0)
    {
        int a=val%10;
        int pro=1;
        for(int i=a;i>0;i--)
        {
            pro*=i;
        }
        sum+=pro;
        val/=10;
    }
    if(sum==temp){
     printf("strong num");
    }
    else{
        printf("not a strong num");
    }
}