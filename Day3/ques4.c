// LCM of two numbers
#include <stdio.h>

int main()
{
    int a, b, num;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    num = (a > b) ? a : b;
    while (1)
    {
        if (num % a == 0 && num % b == 0)
        {
            printf("LCM =%d", num);
            break;
        }
        num++;
    }
    return 0;
}