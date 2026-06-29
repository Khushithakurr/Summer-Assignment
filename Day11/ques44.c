// function to find the factorial
#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    if (n < 0)
        printf("factorial is not defined");
    else
        printf("factorial=%d", factorial(n));
    return 0;
}