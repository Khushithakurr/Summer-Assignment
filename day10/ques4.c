// character pyramid
#include <stdio.h>

int main()
{
    int n,i,j;
    printf("enter no of rows");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
            printf("%c",'A'+j);
        for (j = i - 2; j >= 0; j--)
           printf("%c",'A'+j);
        printf("\n");
    }

    return 0;
}