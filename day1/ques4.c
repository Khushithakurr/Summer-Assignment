#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("enter the number:");
    scanf("%d", &n);
    if(n==0)
    printf("there is 1 digit in number");
    else{
    while (n!=0)
    {
        n = n / 10;
        count++;
    }
    printf("there are %d digits in the number.",count);
}
    return 0;
}