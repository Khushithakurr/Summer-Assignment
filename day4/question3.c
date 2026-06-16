// armstrong number
#include <stdio.h>
#include<math.h>
int main()
{
    int num, temp, r, n = 0;
    float result=0.0;
    printf("enter the number");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        temp = temp / 10;
        n++;
    }
    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        result = result + pow(r, n);
        temp = temp / 10;
    }
    if (result == num)
        printf("%d is armstrong number", num);
    else
    printf("%d is not armstrong",num);
    return 0;
}