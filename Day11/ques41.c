// sum of two number
#include <stdio.h>
int sum(int x, int y)
{
    return x + y;
}
int main()
{
    int x, y;
    printf("enter two numbers");
    scanf("%d %d", &x, &y);
    printf("sum=%d", sum(x, y));
    return 0;
}