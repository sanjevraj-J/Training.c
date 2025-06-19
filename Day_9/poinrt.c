//void pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a;
   void *p=&a;
   printf("%p",p);
}
//wild pointer
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
   
//    void *p;
//    printf("%p",p);
// }
//dangling pointer
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
   
//    void *p=malloc(size of(int));
//    *p=10;
//    p=NULL;
//    printf("%p",*p);
// }