#include<stdio.h>
int main(){
int a,n,s=0;
scanf("%d",&a);
int temp=a;
while(a>0)
{
    n=a%10;
    s+=(n*n*n);
    a/=10;

}
if(s==temp)
{
    printf("armstrong:%d",temp);
}
else
{
    printf("its not armstrong");
}
}