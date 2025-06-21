// #include<stdio.h>
// int main()
//     {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int temp=b;
//     int div=1;
  
//     while(temp>10)//forward iteration
//     {
//         temp/=10;
//         div*=10;
//     }
//     while(div>0)
//     {
        
//         a=a*10+b/div;
//         b%=div;
//         div=div/10;
//     }
//     printf("%d",a);
//  return 0;
// }
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int temp = b;
    int div = 1;

    while (temp > 0) {
        div *= 10;
        temp /= 10;
    }

  
    a = a * div + b;

    printf("%d", a);
    return 0;
}
