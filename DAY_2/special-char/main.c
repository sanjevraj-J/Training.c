#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("alphabet\n");
    else if (ch >= '0' && ch <= '9')
        printf("number\n");
    else
        printf("special character\n");

   return 0;
}