// to find x^n without pow()
#include <stdio.h>

int main()
{
    int x, n, i, result = 1;
    printf("enter the base");
    scanf("%d", &x);
    printf("enter the power");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        result = result * x;
    }
    printf("%d^%d=%d", x, n, result);
    return 0;
}