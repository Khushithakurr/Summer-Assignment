// decimal into binary
#include <stdio.h>

int main()
{
    int n, digits[25], i = 0,j;
    printf("enter the decimal number");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("binary=0");
        return 0;
    }
    while (n > 0)
    {
        digits[i] = n % 2;
        n = n / 2;

        i++;
    }
    printf("binary=");
    for ( j = i - 1; j >= 0; j--)
    {
        printf("%d", digits[j]);
    }
    return 0;
}