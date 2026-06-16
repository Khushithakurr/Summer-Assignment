// nth term of fibonacci series
#include <stdio.h>

int main()
{
    int n, x, a = 0, b = 1;
    printf("enter the number:");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("the %dth term of fibonacci series is %d", n, a);
    }
    else if (n == 2)
    {
        printf("the %dth term of fibonacci series is %d", n, b);
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            int c = a + b;
            a = b;
            b = c;
        }
        printf("the %dth term of fibonacci series is %d", n, b);
    }

    return 0;
}