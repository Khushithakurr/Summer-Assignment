// to find largest prime factor
#include <stdio.h>

int main()
{
    int n, factor;
    factor = 0;
    printf("enter the number");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            factor = i;
            n = n / i;
        }
    }
    printf("largest factor is %d", factor);
    return 0;
}