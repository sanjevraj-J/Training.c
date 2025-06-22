#include <stdio.h>
#include <math.h>

int main() {
    int num, sq, digits = 0;
    scanf("%d", &num);
    sq = num * num;
    int temp = num;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    int pow10 = pow(10, digits);
    int right = sq % pow10;
    int left = sq / pow10;

    if (left + right == num)
        printf("Kaprekar Number\n");
    else
        printf("Not Kaprekar Number\n");

    return 0;
}
