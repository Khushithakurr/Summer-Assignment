// to find number is palindrome or not
#include <stdio.h>

int main()
{
    int num, r, rev = 0, temp;
    printf("enter the number:");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    if (temp == rev)
    {
        printf("%d is palindrom", temp);
    }
    else
    {
        printf("%d is not palindrom", temp);
    }
    return 0;
}