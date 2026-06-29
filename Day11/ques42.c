// functiom to find the max of two numbers
#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int a, b;
    printf("enter two numbers");
    scanf("%d %d", &a, &b);
    printf("max no=%d", max(a, b));
    return 0;
}