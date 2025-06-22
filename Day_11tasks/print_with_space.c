#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int rev = 0, temp = num;
    while (temp) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    while (rev>0) {
        printf("%d ", rev % 10);
        rev /= 10;
    }

    return 0;
}
