// Armstrong number in range
#include <stdio.h>
#include <math.h>

int main()
{
    int n , num, r, temp, n1, n2;
    float result ;
    printf("enter the starting and ending number:");
    scanf("%d %d", &n1, &n2);
    for (num = n1; num <= n2; num++)
    {
        n=0;
        result=0.0;
        temp = num;
        while (temp != 0)
        {
            n++;
            temp = temp / 10;
        }
        temp = num;
        while (temp != 0)
        {
            r = temp % 10;
            result = result + pow(r, n);
            temp = temp / 10;
        }
        if (result == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}