#include<stdio.h>
// void  inc(int *y){
//     (*y)++;
// }
// int main(){
//     int a=10;
//     inc (&a);
//     printf("%d\n",a);
//    return 0; 
// }
// pointer-pointer
int main()
{
   int a=10;
   int *p1=&a;
   int **p2=&p1;
   int ***p3=&p2;
   printf("")


}
int main()
{
   int a=10;
   int *p1=&a;
   int **p2=&p1;
   int ***p3=&p2;
   int ****p4=&p3;
   printf("%d\n",*p1);
   printf("%p\n",&p2);
   printf("%d\n",**p3);
   printf("%d\n",*p2);
   printf("%d",*p3);
   
 return 0;

}


