// prime number check
#include <stdio.h>

int main()
{
    int n, flag = 0;
    printf("enter the number:");
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    if (n == 1)
        printf("1 is neither prime nor composite");
    else if (flag == 0)
        printf("prime");
    else
        printf("not prime");

    return 0;
}