#include <stdio.h>

int main() {
    int num, sum = 0, temp;
    scanf("%d", &num);
    temp = num;

    while (temp>0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (num % sum == 0)
        printf("Harshad Number\n");
    else
        printf("Not Harshad Number\n");

    return 0;
}
