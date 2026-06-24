// binary into decimal
#include <stdio.h>

int main()
{
    int n, base = 1, decimal = 0, r;
    printf("enter the binary number");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        decimal = decimal + r * base;
        base = base*2;
        n = n / 10;
    }
    printf("decimal=%d", decimal);
    return 0;
}