#include <stdio.h>
int main()
{
    int a, b, c, x;
    printf("Enter nuber : ");
    scanf("%d", &a);
    printf("Enter nuber : ");
    scanf("%d", &b);
    printf("Enter nuber : ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        x = a;
    }
    if (a >= c)
    {
        printf("%d", a);
    }
    if (b >= a && b >= c)
    {
        printf("%d", b);
    }
    if (c >= a && c >= b)
    {
        printf("%d", c);
    }
}