// to find product of digits of number
#include <stdio.h>

int main()
{
    int n, product = 1, r;
    printf("enter the number:");
    scanf("%d", &n);
    while (n>0)
    {
        r = n % 10;
        product = product * r;
        n = n / 10;
    }
    printf("product od digits of given number=%d", product);
    return 0;
}