#include <stdio.h>
int main()
{
    int a, i, j;
    printf("Enter nuber : ");
    scanf("%d", &a);

    i = 1;
    while (i <= a)
    {
        j = 1;
        while (j <= a)
        {
            printf("*");
            j += 1;
        }printf("\n");
        i+=1;
    }
}