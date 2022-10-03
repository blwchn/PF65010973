#include <stdio.h>
int main()
{
    int x;
    int i=1, j=1;
    printf("Input number :");
    scanf("%d", &x);

    while (i <= x)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        i=i+1;
        printf("\n");
    }
}
    